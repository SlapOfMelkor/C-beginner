#include <stdio.h>

int main(){
	int yuz,elli,yirmi,on,para;
	printf("...Banknot hesabi yapilacak para miktarini giriniz...");
	printf("\nNot: Girilen miktar 10'un katlari olmalidir\n");
	scanf("%d",&para);
	yuz=para/100;
	elli=(para%100)/50;
	yirmi=((para%100)%50)/20;
	on=(((para%100)%50)%20)/10;
	printf("...paraniz su banknotlardan olusmaktadir...\n %d adet 100'luk\n %d adet 50'lik\n %d adet 20 lik\n %d adet 10 luk",yuz,elli,yirmi,on);
	
	
	
}
