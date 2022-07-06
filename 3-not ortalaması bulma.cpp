#include <stdio.h>
int main(){
	int vize,final,ort,numara;
	printf("numaranizi giriniz = ");
	scanf("%d",&numara);
	printf("vize notunu giriniz = ");
	scanf("%d",&vize);
	printf("final notunu giriniz =");
	scanf("%d",&final);
	ort=(vize*4/10)+(final*6/10);
	printf("%d numarali ogrencinin not ortaamasý = %d",numara,ort);
	
	
	
}
