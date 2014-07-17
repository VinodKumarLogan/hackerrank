#include <stdio.h>
long cache[10000]= {0},c=1;
long diwaliLights(int n) {
	int i;
	if(c>=n)
		return cache[n];
	for(i=c+1;i<=n;i++)
		cache[i] = (cache[i-1]<<1) % 100000;
	return cache[n];
}
int main(int argc, char const *argv[]) {
	int T,N;
	scanf("%d",&T);
	cache[1] = 2;
	while(T--) {
		scanf("%d",&N);
		printf("%ld\n",diwaliLights(N)-1);
	}
	return 0;
}