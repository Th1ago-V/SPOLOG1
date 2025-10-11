#include<stdio.h>
int main(){
	int A[4], B[4], C[4][4],  i;
	
	for(i=0; i<=3;++i){
		printf("Insira o valor da Matriz A, linha %d: ", i+1);
		scanf("%d", &A[i]);
	}
	
	for(i=0; i<=3;++i){
		printf("Insira o valor da Matriz B, linha %d: ", i+1);
		scanf("%d", &B[i]);
	}

    printf("Os valores da coluna 1 da Matriz C sao: \n");
	for(i=0; i<=3;++i){
    C[1][i]=A[i]*2;
    printf("%d \n",C[1][i]);
	}
	
	printf("Os valores da coluna 2 da Matriz C sao: \n");
	for(i=0; i<=3;++i){
    C[2][i]=B[i]-5;
     printf("%d \n",C[2][i]);
	}
	
	return 0;
}
