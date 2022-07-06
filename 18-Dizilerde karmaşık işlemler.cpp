#include <stdio.h>
#include <math.h>
int main(){
int max,min,islem,j,p,top=0,ort;

printf("Dizinin Uzunlugunu belirtin\n");
scanf("%d",&p);
j=p-1;
int A[p+1],A2[p+1];
for(int i=0;i<p;i++){
	printf("diziye eklenecek sonraki deðeri giriniz");
	scanf("%d",&A[i]);
}	
for(int i=0;i<p;i++){
	top=top+A[i];	
}
ort=top/p;
for(int i=0;i<p;i++){
	A2[j]=A[i];
	j--;
	
}	
min=A[0];
for(int i=1;i<p;i++){
	if(A[i]<min){
		min=A[i];
	}

}
max=A[0];
for(int i=1;i<p;i++){
	if(A[i]>max){
		max=A[i];
	}

}	
printf("Yapilacak islemi secin\n1-Dizi Elemanlarini Topla\n2-Dizinin Ortalamasini Bul\n3-Dizinin Ortalamasindan buyuk olan elemanlari goster\n4-Dizinin Elemanlarini Baska bir Diziye tersten yazdir\n5-Dizinin En Kucuk Ve En Buyuk Elemanlarini Goster\n");	
scanf("%d",&islem);

if(islem==1){
	printf("Dizinin Elemanlari Toplami = %d",top);
}
else if(islem==2){
	printf("Dizinin Ortalamasi = %d",ort);
}
else if(islem==3){
	for(int i=0;i<p;i++){
	if(A[i]>ort){
		
		printf("Su eleman Dizinin Ortalamasindan Buyuk = %d\n",A[i]);
	}
}	
}
else if(islem==4){
	printf("Girdiginiz dizinin tersten yazilisi ");
	for(int i=0;i<p;i++){
		printf("%d  ",A2[i]);
	}
}
else if(islem==5){
	printf("dizinin minimum degeri = %d\n",min);
	printf("dizinin maximum degeri = %d",max);
}
}
