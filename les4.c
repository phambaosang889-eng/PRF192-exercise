#include<stdio.h>
int so(int n){
	int reverse=0;
	int org=n;
	int sum=0;
	int tungso=0,dieukien=0;
	while(n>0){
		tungso=n%10;
		if(tungso==6) dieukien=1;
		reverse=reverse*10+tungso;
		sum=sum+tungso;
		n=n/10;
	}
	return(dieukien==1 && reverse==org && sum%10==8);
}
int main(){
	int i,a,b;scanf("%d%d",&a,&b);
	int phay=1;
	for(i=a;i<=b;i++){
		if(so(i)){
			if(!phay) printf(" ");
			printf("%d",i);
			phay=0;
		}
	}
	return 0;
}
	