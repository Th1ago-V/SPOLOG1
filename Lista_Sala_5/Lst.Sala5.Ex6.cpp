#include<stdio.h>
int main(){
	int A[3], B[3], i, j, x, z, a, n;
	for(i=0; i<=2; ++i){
		printf("Insira um valor:");
		scanf("%d", &A[i]);
		B[i]=A[i]*A[i];
	}
	
		
	printf("\n Insira um numero a ser pesquisado: ");
	scanf("%d", &n);
	j=0;
	a=0;
	while (j<=2 && a==0 ){
		if (B[j]==n){
			a=1;
		}
		else {
			j = j + 1;
		}
		if (a==1)
			printf("\n Foi localizado em %d", j+1);
	}
return 0; 
}

