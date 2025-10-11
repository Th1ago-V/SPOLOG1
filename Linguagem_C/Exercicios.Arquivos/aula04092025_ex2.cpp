#include <stdio.h>
int main(){
	FILE *ptarq;
	char palavra[20];
	ptarq = fopen("arq1.txt", "r");
	fscanf(ptarq, "%s", palavra);
	printf("Palavra = %s", palavra);
	fclose(ptarq);
}
