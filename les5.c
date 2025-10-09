#include<stdio.h>
#include<math.h>
int testsonguyento(int a){
	int i;
	for(i=2;i*i<=a;i++){
		if(a%i==0) return 0;
	}
	return 1;
}
int testsosphenic(int a){
	int count=0;
	int i;
	for(i=2;i<=a;i++){
		if(testsonguyento(i)==1 && a%i==0){
			int testlapso=0;
			while(a%i==0){
				testlapso++;
				a=a/i;
			}
			if(testlapso>1) return 0;
			else count++;
		}
		if(count>3){
			return 0;
		}
	}
	if(count==3) return 1;
	else return 0;
}
int main(){
	int a; scanf("%d",&a);
	if(testsosphenic(a)==1) printf("1");
	else printf("0");
}