#include <stdio.h>

int paliKontrol(int sayi);

int main(){
	
	int sayi = 0;
	
	printf("sayi girin >>");
	scanf(" %d",&sayi);
	
	if(paliKontrol(sayi)) printf("%d sayisi palindrom sayidir",sayi);
	else printf("%d sayisi palindrom sayi degildir",sayi);
	
	return 0x0;	
}

int paliKontrol(int sayi){
	int temp = sayi,ters = 0,rakam = 0;
	
	while(sayi > 0){
	rakam = sayi % 10;
	ters = ters * 10 + rakam;
	sayi /= 10;
	}

	if(ters == temp)
		return 1;

	return 0;
}

