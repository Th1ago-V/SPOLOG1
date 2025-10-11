#include<stdio.h>
int main(){ 
 int A[12], B[12], C[12], i, j, x;
 
   for(i=0;i<=11; ++i){
   printf("Insira um valor para a matriz A: ");
   scanf("%d", &A[i]);
}
for(i=0; i<=11; ++i){
		for(j=i+1; j<=11; ++j){
			if(A[i] > A[j]){
				x=A[i];
				A[i]=A[j];
				A[j]=x;
			}
		}
	}
			

   for(i=0;i<=11; ++i){
   printf("Insira um valor para a matriz B: ");
   scanf("%d", &B[i]);
}
for(i=0; i<=11; ++i){
		for(j=i+1; j<=11; ++j){
			if(B[i] > B[j]){
				x=B[i];
				B[i]=B[j];
				B[j]=x;
			}
		}
	}

   for(i=0;i<=11; ++i){
   C[i]=A[i]+B[i];
}
for(i=0; i<=11; ++i){
		for(j=i+1; j<=11; ++j){
			if(C[i] > C[j]){
				x=C[i];
				C[i]=C[j];
				C[j]=x;
			}
		}
	}

for(i=0; i<=11; ++i){
	printf("%d \n", C[i]);
}	
	return 0;
}

