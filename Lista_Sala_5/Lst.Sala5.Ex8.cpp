#include<stdio.h>
int main(){
  int A[4], i, x, j, n;
  for(i=0; i<=3; ++i){
  	printf("Insira a nota o aluno numero %d: ", i+1);
  	scanf("%d", &A[i]);
  }
  for(i=0;i<=3;++i){
  	for(j=i+1;j<=3;++j){
  		if(A[i]>A[j]){
		  x=A[i];
  		  A[i]=A[j];
  		  A[j]=x;
		  }
	  }
  }
  
  printf("As nota, em ordem crescente: ");
  for(i=0; i<=3; ++i){
  	printf("%d \n", A[i]);
  }
  
  printf("Digite um numero a ser pesquisado: ");
  scanf("%d", &n);
   for(i=0;i<=3; ++i){
   	if(n==A[i]){
   		printf("A nota ocupa a %d posicao!", i+1);
	   }
   	
   }
return 0; 
}

