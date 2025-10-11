#include <stdio.h>
int main()
{
	FILE *ptarq;
	char frase[81];
	ptarq = fopen("frase2.txt", "r");
	while(fgets (frase, 80, ptarq) != NULL)
	printf("%s", frase);
	fclose(ptarq);
	return 0;
}
