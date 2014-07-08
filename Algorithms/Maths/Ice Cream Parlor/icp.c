#include <stdio.h>
void findNextNumber(int *list, int n, int num, int a) {
    int j = 0,b;
    while(j<n){
        if(num==list[j] && j!=a) {
            b = j;
            break;
        }
        j++;
    }
    if(a>b)
        printf("%d %d\n",b+1,a+1);
    else
        printf("%d %d\n",a+1,b+1);
}
void iceCreamParlor(int m, int n, int *list) {
    int hash[10001]={0},i=0;
    while(i<n){
        if(list[i]>=m) {
            i++;
            continue;
        }
        hash[list[i]]++;
        i++;
    }
    i = 0;
    while(i<n) {
        if(list[i]>=m) {
            i++;
            continue;
        }
        if(list[i]==(m-list[i])){
            if(hash[list[i]]>1) {
                findNextNumber(list,n,list[i],i);
                break;
            }
        }
        else if(hash[list[i]]!=0 && hash[m-list[i]]!=0) {
            findNextNumber(list,n,m-list[i],i);
            break;
        }
        i++;
    }
}
int main() {
    int T,M,N,ar[10001],i;
    scanf("%d",&T);
    while(T--) {
        scanf("%d%d",&M,&N);
        i=0;
        while(i<N) {
            scanf("%d",&ar[i++]);
        }
        iceCreamParlor(M,N,ar);
    }
    return 0;
}