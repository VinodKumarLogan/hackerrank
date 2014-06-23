#include <stdio.h>
long halloweenParty(long k) {
	long val = k>>1;
	if(k&1)
		return val*(val+1);
	else
		return val*val;
}
int main() {
	int N,i;
	long K;
	scanf("%d",&N);
	for(i=0;i<N;++i) {
		scanf("%ld",&K);
		printf("%ld\n",halloweenParty(K));
	}
	return 0;
}