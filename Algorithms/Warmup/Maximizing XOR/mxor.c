#include <stdio.h>
int MaximizingXOR(int l,int r) {
	int max=-1,curr,i,j;
	for(i=l;i<r;i++) {
		for(j=i+1;j<=r;j++) {
			curr = i ^ j;
			if(curr>max)
				max = curr;
		}
	}
	return max;
}
int main() {
	int L,R;
	scanf("%d%d",&L,&R);
	printf("%d\n",MaximizingXOR(L,R));
	return 0;
}