#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, a;
	int Maks;
	int *dizipoin;
	
	printf("Lütfen bir eleman sayisi giriniz:");
	scanf("%d", &a);
	
	dizipoin = (int*)calloc(a,sizeof(int));
	
	Maks = *(dizipoin+i);
	
	for(i=0; i<a; i++){
		printf("dizi[%d]:", i);
		scanf("%d", dizipoin+i);
	}
	
	for(i=0; i<a; i++){
		if(*(dizipoin+i)>Maks){
			Maks = *(dizipoin+i);}}
			
	printf("%d", Maks);
	return 0;
}
