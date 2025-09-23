#include<stdio.h>
int main(){
	int n, uoc=0; scanf("%d",&n);
	while(n<1){
		printf("error, vui long nhap lai\n");
		scanf("%d",&n);
	}
	for(int i=1;i<=n;i++){
		if(n%i==0) uoc++;
	} 
	printf("%d",uoc);
	return 0;
}