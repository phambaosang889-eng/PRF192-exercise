#include<stdio.h>
int main(){
	int n; scanf("%d",&n);
	float sum=0;
	if(n<=0) return 0;
	for(int i=1;i<=n;i++){
		sum=sum+1.0/i;
	}
	printf("%.3f",sum);
	return 0;
}