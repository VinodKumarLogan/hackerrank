#include <stdio.h>
long chocolateFeast(long n, long m, long c) {
	long chocolates = 0,wrappers = 0, added;
	chocolates = n/c;
	wrappers = chocolates;
	while(wrappers>=m){
		added = wrappers/m;
		wrappers = wrappers%m + added;
		chocolates += added; 
	}
	return chocolates;
}
int main() {
	int T;
	long N,M,C;
	scanf("%d",&T);
	while(T--) {
		scanf("%ld%ld%ld",&N,&C,&M);
		printf("%ld\n",chocolateFeast(N,M,C));
	}
	return 0;
}