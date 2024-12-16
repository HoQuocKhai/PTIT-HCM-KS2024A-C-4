#include<stdio.h>

int main(){
	float a,b,t,s,d=1000;
	printf("nhap so cong to dien dau thang : ");
	scanf("%f",&a);
	printf("nhap so cong to dien cuoi thang : ");
	scanf("%f",&b);
	t=b-a;
	if(t<0){
		printf("ban nhap sai roi");
	}else if (t<50){
		s=t*10;
		printf("so tien dien phai tra la : %.2f",s*d);
	}else if(50<=t&&t<100){
		s=t*15+50*10;
		printf("so tien dien phai tra la : %.2f",s*d);
	}else if(100<=t&&t<150){
		s=t*20+50*15+50*10;
		printf("so tien dien phai tra la : %.2f",s*d);
	}else if(150<=t&&t<200){
		s=t*25+50*20+50*15+50*10;
		printf("so tien dien phai tra la : %.2f",s*d);
	}else {
		s=t*30+50*25+50*20+50*15+50*10;
		printf("so tien dien phai tra la : %.2f",s*d);
	}
	return 0;
}
