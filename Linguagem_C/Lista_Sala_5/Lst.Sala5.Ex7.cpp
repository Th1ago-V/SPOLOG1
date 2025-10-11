#include<stdio.h>
int main(){
	int A[2], B[2], i, j, x, a, n;
	for(i=0; i<=1; ++i){
		printf("Insira um valor:");
		scanf("%d", &A[i]);
		B[i]=A[i]+2;
	}
	
	for(i=0; i<=1; ++i){
		for(j=i+1; j<=2; ++j){
			if(B[i] > B[j]){
				x=B[i];
				B[i]=B[j];
				B[j]=x;
			}}}
	
	for(j=0; j<=1; j++){
		printf("\n %d", B[j]);}
		
	printf("\n Insira um numero a ser pesquisado: ");
	scanf("%d", &n);
	j=0;
	a=0;
	while (j<=1 && a==0 ){
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

