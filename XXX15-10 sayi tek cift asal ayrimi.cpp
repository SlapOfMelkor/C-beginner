#include  <stdio.h>
#include  <math.h>

int main(){
	int arr[9],cift[10],tek[10],asal[10],sayac;
	printf("listelenecek sayilari giriniz\n");
	for(int i=0;i<=9;i++){
		scanf("%d",&arr[i]);
		
	}
	for(int i=0;i<=9;i++){
		if(arr[i]%2==0){
			cift[i]=arr[i];
		}
		else if(arr[i]%2==1){
			tek[i]=arr[i];
		}
		
	}
	for(int i=0;i<=9;i++){
		sayac=0;
		for(int j=2;j<=arr[i];j++){
		if(arr[i]%j==0){
			sayac++;
		}	
		}
		if(sayac==0){
			asal[i]=arr[i];
		}
	}
	printf("Tek sayilar");
	for(int i=0;i<=9;i++){
	
	printf("\n%d",tek[i]);
	}
	printf("Cift sayilar");
	for(int i=0;i<=9;i++){
	
	printf("\n%d",cift[i]);
	}
	printf("Asal sayilar");
	for(int i=0;i<=9;i++){
	
	printf("\n%d",asal[i]);
	}
	
}
