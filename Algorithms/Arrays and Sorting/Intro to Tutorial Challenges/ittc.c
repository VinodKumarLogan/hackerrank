#include <stdio.h>
#include <stdlib.h>
int introToTutorialChallenge(int *list, int len, int key) {
	int low=0,mid,high=len-1;
	while(high>=low) {
		mid = (low+high)>>1;
		if(list[mid]==key)
			return mid;
		else if(list[mid]<key)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return -1;
}
int main(int argc, char const *argv[]) {
	int n,*ar,v,i=0;
	scanf("%d%d",&v,&n);
	ar = (int*)malloc(sizeof(int)*n);
	while(i<n)
		scanf("%d",&ar[i++]);
	printf("%d",introToTutorialChallenge(ar,n,v));
	return 0;
}