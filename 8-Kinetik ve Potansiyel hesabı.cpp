#include <stdio.h>
#include <math.h>

int main(){
	int m,h,v;
	float Ep,Ek;
	printf("Cismin kutlesini giriniz=");
	scanf("%d",&m);
	printf("cismin yuksekligini giriniz");
	scanf("%d",&h);
	printf("cismin hizini giriniz");
	scanf("%d",&v);
	Ep=m*9.8*h;
	Ek=m*v*v/2;
	printf("cismin potansiyel enerjisi = %f",Ep);
	printf("\ncismin kinetik enerjisi = %f",Ek);
	
	
	
	
	
}
