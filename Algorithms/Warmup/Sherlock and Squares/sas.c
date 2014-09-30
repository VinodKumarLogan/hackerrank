#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[]) {
	unsigned long A,B;
	int T;
	scanf("%d",&T);
	while(T--) {
		scanf("%lu %lu",&A,&B);
        B = (unsigned long)floor(sqrt(B));
        A = (unsigned long)ceil(sqrt(A));
        A = B - A + 1;
        if (A<=0)
            A = 0;
		printf("%ld\n",A);
	}
	return 0;
}