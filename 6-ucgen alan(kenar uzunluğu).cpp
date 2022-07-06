#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,u,alan,kokic;
	printf("alan hesabi yapýlacak ucgenin kenar uzunluklarini giriniz ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	u=(a+b+c)/2;
	kokic=u*(u-a)*(u-b)*(u-c);
	alan=sqrt(kokic);
	printf("Ucgenin alani = %d",alan);
	
	
	
	
}
