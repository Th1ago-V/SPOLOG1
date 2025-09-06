#include <stdio.h>
int main(){
	FILE *ptarq;
	char letra;
	ptarq = fopen ("frase.txt", "r");
	printf("Frase: ");
	while((letra=fgetc(ptarq)) != EOF)
	printf("%c", letra);
	fclose (ptarq);
	return 0;
}
