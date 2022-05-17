#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *poin1, *poin2;
	char *sonuc;
	
	printf("Lutfen stringi giriniz:");
	scanf("%s", poin1);
	int uzunluk1 = 0;
	while(*poin1 != '\0'){
		uzunluk1++;
		poin1++;
	}

	printf("Lutfen stringi giriniz:");
	scanf("%s", poin2);
	int uzunluk2 = 0;
	while(*poin2 != '\0'){
		uzunluk2++;
		poin2++;
	}
	sonuc = (char*)malloc((uzunluk1 + uzunluk2) * sizeof(char));
	
	
	return 0;
	 }
