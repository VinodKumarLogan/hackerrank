#include <stdio.h>
void manasaAndStones(int n, int a, int b) {
	int i = 0;
	long curr = 0,prev = 0;
	while(i<=n) {
		curr = (a*i) + (b*(n-i));
		if(curr!=prev)
			printf("%ld ",curr);
		prev = curr;
		i++;
	}
	printf("\n");
}
int main() {
	int T,n,a,b;
	scanf("%d",&T);
	while(T--) {
		scanf("%d%d%d",&n,&a,&b);
		if(a<b)
			manasaAndStones(n-1,b,a);
		else
			manasaAndStones(n-1,a,b);
	}
	return 0;
}