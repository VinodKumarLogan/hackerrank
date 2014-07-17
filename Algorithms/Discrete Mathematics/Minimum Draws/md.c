#include <stdio.h>
int main(int argc, char const *argv[]) {
	int T;
	long N;
	scanf("%d",&T);
	while(T--) {
		scanf("%ld",&N);
		printf("%ld\n",N+1);
	}
	return 0;
}