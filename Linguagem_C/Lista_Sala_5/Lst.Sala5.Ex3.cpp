#include<stdio.h>
int main(){
	int A[5], B[5], i, j, x, z, a, n;
	for(i=0; i<=4; ++i){
		printf("Insira um valor:");
		scanf("%d", &A[i]);
	}
	
	for(i=0; i<=4; ++i){
	 for(z=A[i]-1; z>=1;--z){
	 B[i]=A[i]*z;
	 A[i]=B[i];
		}
	}
	
	
	for(i=0; i<=4; ++i){
		for(j=i+1; j>=7; ++j){
			if(B[i] > B[j]){
				x=B[i];
				B[i]=B[j];
				B[j]=x;
			}
		}
	}
	
	for(j=0; j<=4; j++){
		printf("\n %d", B[j]);}
		
	printf("\n Insira um numero a ser pesquisado: ");
	scanf("%d", &n);
	j=0;
	a=0;
	while (j<=7 && a==0 ){
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

