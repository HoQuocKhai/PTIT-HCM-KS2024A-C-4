#include<stdio.h>

int main(){
	int a,b,c;
	printf ("nhap so nguyen thu 1 : ");
	scanf("%d",&a);
	printf ("nhap so nguyen thu 2 : ");
	scanf("%d",&b);
	printf ("nhap so nguyen thu 3 : ");
	scanf("%d",&c);
	if(b>a){
		if (c>a&&c<b){
			printf("so %d nam trong khoang tu %d den %d",c,a,b);	
		}else {
			printf("so %d khong nam trong khoang tu %d den %d",c,a,b);
		}
	}else {
		if (c>b&&c<a){
			printf("so %d nam trong khoang tu %d den %d",c,b,a);	
		}else {
			printf("so %d khong nam trong khoang tu %d den %d",c,b,a);
		}
	}
	
	return 0;
}
