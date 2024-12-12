#include<stdio.h>

int main(){
	int a;
	printf ("nhap 1 so nguyen bat ky: ");
	scanf("%d",&a);
	if (a>0){
		printf("so %d la so duong",a);	
	}else {
		printf("so %d la so am",a);
	}
	return 0;
}
