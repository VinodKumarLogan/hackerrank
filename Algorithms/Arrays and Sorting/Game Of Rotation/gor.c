#include <stdio.h>
#include <stdlib.h>
unsigned long long PMEAN(unsigned long i, unsigned long n, unsigned long long *ar) {
    unsigned long long pmean = 0ULL,j=1ULL;
    while(j<=n) {
        pmean += j*(ar[i%n]);
        i++;
        j++;
    }
    return pmean;
}

void gameOfRotation(unsigned long n, unsigned long long *ar) {
    unsigned long i = 1UL;
    unsigned long long pm, pmax = PMEAN(0UL,n,ar);
    while(i<n) {
        pm = PMEAN(i,n,ar);
        if(pm>pmax)
            pmax = pm;
        i++;
    }
    printf("%llu\n",pmax);
}

int main(void) {
    unsigned long N,i;
    unsigned long long *ar;
    scanf("%lu",&N);
    ar = (unsigned long long*)malloc(sizeof(unsigned long long)*N);
    for (i=0UL;i<N;++i)
        scanf("%llu",&ar[i]);
    gameOfRotation(N,ar);
    return 0;
}