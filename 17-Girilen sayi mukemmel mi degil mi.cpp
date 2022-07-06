#include  <stdio.h>
#include  <math.h>

int main(){
int a,top=0;
printf("Mukkemmel Sayi Oldugu Kontrol Edilecek Sayiyi Giriniz\n");
scanf("%d",&a);
for(int i=1;i<a;i++){
	if(a%i==0){
		top=top+i;
	}
}
if(top==a){
	printf("%d sayisi Mukkemmel Sayidir",a);
}
else{
	printf("%d sayisi Mukemmel Sayi Degildir",a);
}




}
