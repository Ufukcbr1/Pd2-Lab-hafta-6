#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *p;
	
	p = (char*)malloc(10 * sizeof(char));
    
    char isim[10]="ufukcibir";
    
    strcpy(p, isim);
    printf("%s", isim);
	
	return 0;
}
