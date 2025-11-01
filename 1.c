#include<stdio.h>
int main(){
	int n; scanf("%d",&n);
	int solon=1000000007;
	int i,j;
	unsigned long long pascal[n][n];
	pascal[0][0]=1;
	for(i=0;i<n;i++){
		pascal[i][0]=1;
		pascal[i][i]=1;
		for(j=1;j<i;j++){
			pascal[i][j]=(pascal[i-1][j]+pascal[i-1][j-1])%solon;;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("%llu ",pascal[i][j]);
		}
		printf("\n");
	}
}