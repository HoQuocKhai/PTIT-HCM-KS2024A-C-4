#include<stdio.h>

int main(){
	int a;
	printf("nhap vao mot so nguyen : ");
	scanf("%d",&a);
	if (a%2==0){
		printf("so %d la so chan.",a);
	}else{
		printf("so %d la so le.",a);
	}
	return 0;
}
