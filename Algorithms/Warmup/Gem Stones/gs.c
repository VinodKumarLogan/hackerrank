#include <stdio.h>
#include <stdlib.h>

int gemStones(char** list,int n) {
	int characters[n][26],i,j,curr,count=0;
	for(i=0;i<n;++i)
		for(j=0;j<26;++j)
			characters[i][j] = 0;
	for(i=0;i<n;++i){
		for(j=0;;++j){
			if(list[i][j]=='\0')
				break;
			curr = characters[i][list[i][j] - 'a'];
			if(curr==0)
				characters[i][list[i][j] - 'a'] = 1;
		}
	}
	for(i=0;i<26;++i) {
		for(j=0;j<n;++j)
			if(characters[j][i]==0)
				break;
		if(j==n)
			++count;
	}
	return count;
}
int main() {
	int N,i;
	char **str;
	scanf("%d",&N);
	str = (char**)malloc(sizeof(char*)*N);
	for(i=0;i<N;++i) {
		str[i] = (char*)malloc(sizeof(char)*100);
		scanf("%s",str[i]);
	}
	printf("%d\n",gemStones(str,N));
	return 0;
}