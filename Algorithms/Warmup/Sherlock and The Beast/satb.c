#include <stdio.h>
#include <stdlib.h>

void printN(long count, long num) {
	long i;
	for(i=0;i<count;i++)
		printf("%ld",num);
}

void sherlockAnTheBeast(long n) {
	long five = n/3,three = 0, sum;
	int flag = 0;
	while(five>=0) {
		sum = five*3;
		if((n-sum)%5==0) {
			three = (n-sum)/5; 
			printN(five*3,5);
			printN(three*5,3);
			flag = 1;
			break;
		}
		else
			five--;
	}
	if(!flag)
		printf("-1");
}
int main() {
	int T,i;
	long N;
	scanf("%d",&T);
	while(T--) {
		scanf("%ld",&N);
		sherlockAnTheBeast(N);
		printf("\n");
	}
	return 0;
}