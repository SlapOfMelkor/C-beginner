#include <stdio.h>
#include <math.h>

int main(){
  int a,b,c,x1,x2;
  float delta;
  printf("sirasiyla a,b ve c degerlerini giriniz");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  delta=(b*b)-(4*a*c);
  x1=(-b+sqrt(delta))/(2*a);
  x2=(-b-sqrt(delta))/(2*a);
  if(delta>0){
  	printf("2 reel kok var \n X1=%d \n X2=%d",x1,x2);	
  }
  else if(delta<0){
  	printf("Reel kok yok");
  }
  else{
  	printf("2 reel kok var ve birbirine esit \n X=%d",x1);
  }
	
	
	
	
	
}
