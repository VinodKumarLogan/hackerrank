#include <stdio.h>
#include <stdlib.h>
int sherlockAndArray(int n, int *ar) {
    int diff=0,i;
    for(i=1;i<n;i++)
        diff += ar[i];
    if(!diff)
        return 1;
    for(i=1;i<n;i++) {
        diff -= (ar[i-1]+ar[i]);
        if(!diff)
            return 1;
    }
    return 0;
}

int main(void) {   
    int T,*ar,N,i;
    scanf("%d",&T);
    while(T--) {
        scanf("%d",&N);
        ar = (int*)malloc(sizeof(int)*N);
        for(i=0;i<N;++i)
            scanf("%d",&ar[i]);
        if(sherlockAndArray(N,ar))
            printf("YES\n");
        else
            printf("NO\n");
        free(ar);
    }    
    return 0;
}