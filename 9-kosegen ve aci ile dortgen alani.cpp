#include <stdio.h>
#include <math.h>
int main(){
	double pi=3.14159265;
	double a,alan;
	int f,e;
	printf("sirasiyla f,e ve alfa degerlerini giriniz");
	scanf("%d",&f);
	scanf("%d",&e);
	scanf("%lf",&a);
	double rad=a*pi/180;
	alan=f*e*sin(rad)/2;
	printf("Dortgenin alani = %lf",alan);
	
	
	
	
	
	
	
}
