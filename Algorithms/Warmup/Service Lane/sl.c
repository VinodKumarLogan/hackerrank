#include <stdio.h>
#include <stdlib.h>

int serviceLane(int i,int j,int* ar) {
	int k,type = ar[i];
	for(k=i+1;k<=j;k++)
		if(ar[k]<type)
			type = ar[k];
	return type;
}
int main() {
	int T,N,i,*width,a,b;
	scanf("%d %d",&N,&T);
	width = (int*)malloc(sizeof(int)*N);
	for(i=0;i<N;i++)
		scanf("%d",&width[i]);
	for(i=0;i<T;i++) {
		scanf("%d %d",&a,&b);
		printf("%d\n",serviceLane(a,b,width));
	}
	return 0;
}