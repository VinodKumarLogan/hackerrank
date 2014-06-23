#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int theLoveLetterMystery(char *s) {
	int palindromeCount=0,length,i,j;
	length = strlen(s);
	i = 0;
	j = length-1;
	while(i<j) {
		if(s[i]>s[j])
			palindromeCount+=s[i]-s[j];
		else
			palindromeCount+=s[j]-s[i];
		i++;
		j--;
	}
	return palindromeCount;
}
int main() {
	int T,i;
	char *str = (char*)malloc(sizeof(char)*10000);
	scanf("%d",&T);
	for(i=0;i<T;i++) {
		scanf("%s",str);
		printf("%d\n",theLoveLetterMystery(str));
	}
	return 0;
}