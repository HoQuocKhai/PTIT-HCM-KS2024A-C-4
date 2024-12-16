#include<stdio.h>

int main(){
	int a,b,c,n;
	printf("nhap vao cach tam giac a: ");
	scanf("%d",&a);
	printf("nhap vao cach tam giac b: ");
	scanf("%d",&b);
	printf("nhap vao cach tam giac c: ");
	scanf("%d",&c);
	if(a>b+c||b>a+c||c>b+a){
		printf("la 3 canh tam giac");
	}else{
		printf("khong phai 3 canh tam giac");
	}
	return 0;
}
