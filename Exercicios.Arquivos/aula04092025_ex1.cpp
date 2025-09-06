#include <stdio.h>
int main(){
	FILE *ptarq;
	char palavra[20];
	ptarq = fopen("arq1.txt", "w");
	printf("escreva uma palavra:");
	scanf("%s", palavra);
	fprintf(ptarq, "%s", palavra);
	fclose(ptarq);
	return 0;
}
