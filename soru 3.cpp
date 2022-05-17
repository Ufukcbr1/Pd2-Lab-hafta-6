#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, x, a, b;
	int *dizipoin;
	
	printf("eleman sayisi giriniz:");
	scanf("%d", &a);
	
	dizipoin = (int*)malloc(a * sizeof(int));
	
	for(i=0; i<a; i++){
		printf("dizi[%d]:", i);
		scanf("%d", (dizipoin+i));
	}
	
	realloc(dizipoin , (a+b)* sizeof(int));
	printf("yeni eleman sayisi giriniz:");
	scanf("%d", &b);
	
	for(x=0; x<b; x++){
		printf("dizi[%d]:", x);
		scanf("%d", (dizipoin+x));
	}
	
	for(x=0; x<b; x++){
		printf("%d\n", *(dizipoin+x));
	}
	
	free(dizipoin);
	return 0;
}

