#include<stdio.h>
int main(){
	int A[12], i, j, x;
	for(i=0; i<=11; ++i){
	printf("Insira o valor: ");
	scanf("%d", &A[i]);}
	
	for(i=0; i<=10; ++i){
		for(j=i+1; j<=11; j=++j){
			if(A[i] < A[j]){
				x= A[i];
				A[i]=A[j];
				A[j]=x;
			}
		}
	}
	printf("Em ordem decrescente e: ");
	for(i=0; i<=11; ++i){
	printf("%d \n", A[i]);}
	for(i=0; i<=10; ++i){
		for(j=i+1; j<=11; j=++j){
			if(A[i] > A[j]){
				x= A[i];
				A[i]=A[j];
				A[j]=x;
			}
		}
	}
	
	return 0;
}

