#include <stdio.h>

int utopianTree(int n) {
	int i,height = 1;
	for(i=1;i<=n;i++) {
		if(i&1)
			height=height<<1;
		else
			height+=1;
	}
	return height;
}
int main() {
	int T,N,i;
	scanf("%d",&T);
	for(i=0;i<T;i++) {
		scanf("%d",&N);
		printf("%d\n",utopianTree(N));
	}
	return 0;
}