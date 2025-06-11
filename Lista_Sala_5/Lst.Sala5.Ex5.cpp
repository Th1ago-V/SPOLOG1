#include<stdio.h>
int main(){ 
 int A[2], B[3], C[5], i, j, x;
   for(i=0;i<=1; ++i){
   printf("Insira um valor para a matriz A: ");
   scanf("%d", &A[i]);
}
   for(i=0;i<=2; ++i){
   printf("Insira um valor para a matriz B: ");
   scanf("%d", &B[i]);
}
  for(i=0;i<=1; ++i){
   C[i]=A[i];
}

  for(i=0;i<=2; ++i){
  	C[i+2]=B[i];
}

for(i=0; i<=4; ++i){
		for(j=i+1; j<=4; ++j){
			if(C[i] < C[j]){
				x=C[i];
				C[i]=C[j];
				C[j]=x;
			}}}
			
for(i=0;i<=4; ++i){
   printf("%d \n", C[i]);
   
}


	
	return 0;
}

