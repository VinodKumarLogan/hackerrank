#include <stdio.h>
#include <string.h>
void findPalind(char *arr)
{
    int alphabets[26] = {0},oddCount = 0,arrayLength = strlen(arr),i = 0;
    while(i<arrayLength) {
        alphabets[arr[i]-'a']++;
        i++;
    }
    i = 0;
    while(i<26) {
        if(alphabets[i]&1)
            oddCount++;   
        i++;
    }
    if (oddCount<=1)
        printf("YES\n");
    else
        printf("NO\n");
}
int main() {
    char arr[100001];
    scanf("%s",arr);
    findPalind(arr);
    return 0;
}