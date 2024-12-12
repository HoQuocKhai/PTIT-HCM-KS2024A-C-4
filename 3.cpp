#include<stdio.h>

int main(){
	int a;
	printf("nhap vao mot so nguyen : ");
	scanf("%d",&a);
	if (a%5==0){
		if(a%3==0){
			printf("so %d chia het cho 3 va 5.",a);
		}else{
			printf("so %d chia het cho 5.",a);
		}
	}else if(a%3==0){
			printf("so %d chia het cho 3.",a);
	}else {printf("so %d khong chia het cho 3 va 5.",a);}
	return 0;
}
