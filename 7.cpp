#include <stdio.h>

int main(){
	int a;
	printf("nhap vao nam ban can kiem tra: ");
	scanf("%d",&a);
	if (a%4==0){
		printf("%d la nam nhuan",a);
	}else {
		printf("%d khong phai la nam nhuan",a);
	}
	return 0;
}
