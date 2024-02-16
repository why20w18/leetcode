#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char* s){
	char karakter;
	int j=0,uzunluk = strlen(s),flag = 0;
	
	for(int i = uzunluk-1 ; i >= 0 ; i--){
		karakter = s[i];
		if(karakter == ' ' && flag == 0){
		continue;
		}
		if(karakter != ' '){
			flag = 1;
			j++;
		}
		if(karakter == ' ') break;	
       	} 
		return j;
}

int main(){
	printf("input girin >>");
	char metin[50];
	fgets(metin,50,stdin);
	
	int sonuc = lengthOfLastWord(metin);	
	printf("son kelimenin karakter sayisi = %d",sonuc-1);
}
