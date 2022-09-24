#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,p,s=0;
	printf("nhap canh a=");
	scanf("%f",&a);
	printf("nhap canh b=");
	scanf("%f",&b);
	printf("nhap canh c=");
	scanf("%f",&c);
	if((a+b)>c && (a+c)>b && (b+c)>a){
		p = (a+b+c)/2;
		s = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("\n dien tich cua tam giac la %f",s);
	}else{
	printf("\n day khong phai la ba canh tam giac vui long nhap lai");	

	}

}