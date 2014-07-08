#include<stdio.h>
int main(int argc, char const *argv[]) {
	int T,Px,Py,Qx,Qy;
	scanf("%d",&T);
	while(T--) {
		scanf("%d%d%d%d",&Px,&Py,&Qx,&Qy);
		printf("%d %d\n",(2*Qx-Px),(2*Qy-Py));
	}
	return 0;
}