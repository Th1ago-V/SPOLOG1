#include<stdio.h>
int main(){
	int A[5][3], B[5][3], C[5][3], i, j;
	for(i=0; i<=4; ++i){
		for(j=0; j<=2;++j){
			printf("Insira o valor da Matriz A, linha %d, coluna %d: \n", i+1, j+1);
			scanf("%d", &A[i][j]);
		}
	}
	
	for(i=0; i<=4; ++i){
		for(j=0; j<=2;++j){
			printf("Insira o valor da Matriz B, linha %d, coluna %d: \n", i+1, j+1);
			scanf("%d", &B[i][j]);
		}
	}
	
	for(i=0; i<=4; ++i){
		for(j=0; j<=2;++j){
			C[i][j]=A[i][j]+B[i][j];
			printf("O valor da linha %d, coluna %d, da Matriz C: %d \n", i+1, j+1, C[i][j]);
		}
	}
	
	return 0;
}
