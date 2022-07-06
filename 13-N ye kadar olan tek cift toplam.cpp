#include <stdio.h>
#include <math.h>

int main(){
	int n,tektop=0,ciftop=0,top=0;
	printf("Bir N degeri giriniz ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==0){
			ciftop=ciftop+i;
		}
		else{
			tektop=tektop+i;
		}
		
		
	}
	top=tektop+ciftop;
printf("\n1 den N'e kadar olan tüm tam sayilar toplami = %d",top);	
printf("\n1 den N'e kadar olan tek sayilar toplami = %d",tektop);
printf("\n1 den N'e kadar olan cift sayilar toplami = %d",ciftop);
}
