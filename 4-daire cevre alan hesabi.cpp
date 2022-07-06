#include <stdio.h>
int main(){
int r,istur,pi=3,sonuc;

printf("      islem turu seciniz\n1-cevre hesabi\n2-alan hesabi\n");
scanf("%d",&istur);
printf("yaricap bilgisi giriniz\n");
scanf("%d",&r);
if(istur==1){
	sonuc=2*pi*r;
	printf("islemlerinizin sonucu = %d",sonuc);
}
else if(istur==2){
	sonuc=pi*r*r;
	printf("islemlerinizin sonucu = %d",sonuc);
}
else{
	printf("hatali islem turu");
}
	
}
