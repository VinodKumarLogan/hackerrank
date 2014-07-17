#include <stdio.h>
long long handshake(long n) {
	long long count;
	count = (n * (n-1))>>1;
	return count;
}
int main(int argc, char const *argv[]) {
	int T;
	long N;
	scanf("%d",&T);
	while(T--) {
		scanf("%ld",&N);
		printf("%lld\n",handshake(N));
	}
	return 0;
}