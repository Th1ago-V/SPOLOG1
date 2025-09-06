#include <stdio.h>
int main(){
	FILE *ptarq;
	char resp='S', frase[81];
	ptarq = fopen("frase2.txt", "w");
	while(resp == 'S' || resp == 's'){
		printf("Digite uma frase: \n");
		fflush(stdin);
		fgets(frase, 81, stdin);
		fputs(frase, ptarq);
		printf("Deseja continuar (S/N) \n");
		fflush(stdin);
		scanf("%c", &resp);
	}
	fclose(ptarq);
	return 0;
}
