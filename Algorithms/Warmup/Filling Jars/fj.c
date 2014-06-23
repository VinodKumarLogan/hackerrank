#include <stdio.h>
long fillingJars(long a, long b, long k) {
	return (b-a+1)*k;
}
int main() {
	long N,M,A,B,K,total=0;
	scanf("%ld%ld",&N,&M);
	while(M--) {
		scanf("%ld%ld%ld",&A,&B,&K);
		total += fillingJars(A,B,K);
	}
	printf("%ld\n",(total/N));
	return 0;
}