#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c,sonuc;
	printf("1. sayiyi giriniz=");
	scanf("%d",&a),
	printf("2. sayiyi giriniz=");
	scanf("%d",&b);
	printf("Islem tipi seciniz \n1-Toplama \n2-Cikarma \n3-Carpma \n4-Bolme\n");
	scanf("%d",&c);
	if(c==1){
		sonuc=a+b;
	}
	else if(c==2){
		sonuc=a-b;
	}
	else if(c==3){
		sonuc=a*b;
}	
	else if(c==4){
		sonuc=a/b;
		
	}
	else{
		printf("Hatali islem turu !!! \nUygulama kapatiliyor....");
	}
printf("secilen islem sonucu = %d",sonuc);
}
