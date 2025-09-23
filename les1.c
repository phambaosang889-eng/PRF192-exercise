#include<stdio.h>
int main(){
	int n; scanf("%d",&n);
    while (n <= 0) {             // báo lỗi và nhập lại
        printf("error\n");
        scanf("%d", &n);
    }
	float sum=0;
	if(n<=0) return 0;
	for(int i=1;i<=n;i++){
		sum=sum+1.0/i;    //tính tổng
	}
	printf("%.3f",sum);    //in kết quả
	return 0;
}
