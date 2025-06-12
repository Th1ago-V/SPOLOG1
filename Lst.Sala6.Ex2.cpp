#include<stdio.h>
int main(){
	int A[7], B[7], C[7][7],  i;
	
	for(i=0; i<=6;++i){
		printf("Insira o valor da Matriz A, linha %d: ", i+1);
		scanf("%d", &A[i]);
	}
	
	for(i=0; i<=6;++i){
		printf("Insira o valor da Matriz B, linha %d: ", i+1);
		scanf("%d", &B[i]);
	}

    printf("Os valores da coluna 1 da Matriz C sao: ");
	for(i=0; i<=6;++i){
    C[1][i]=A[i];
    printf("%d \n",C[1][i]);
	}
	
	printf("Os valores da coluna 2 da Matriz C sao: ");
	for(i=0; i<=6;++i){
    C[2][i]=B[i];
     printf("%d \n",C[2][i]);
	}
	
	return 0;
}
