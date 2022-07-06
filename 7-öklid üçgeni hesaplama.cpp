#include <stdio.h>
#include <math.h>
int main(){

int p,k,a;
float h,b,c;
printf("hesabi yapilacak üçgendeki p ve k degerlerini giriniz");
scanf("%d",&p);	
scanf("%d",&k);
a=p+k;
h=sqrt(p*k);
b=sqrt(a*k);
c=sqrt(a*p);
printf("girdiginiz ucgendeki h,p ve c degerleri sunlardir");
printf("\n h=%f   b=%f   c=%f",h,b,c);
}
