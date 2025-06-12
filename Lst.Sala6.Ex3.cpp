#include<stdio.h>
int main(){
	int A[10], a[10], B[3][10], i, j, z;

	for(i=0; i<=9;++i){
		printf("Insira o valor da Matriz A, linha %d: ", i+1);
		scanf("%d", &A[i]);
	}
	 
	for(j=0;j<=2; ++j){
		
	  for(i=0;i<=9;++i){
	    a[i]=A[i];
	    
	     if(j==0){
	 		 B[j][i]=A[i]+5;
	        }
	        
	     if(j==1){
	     	 for(z=a[i]-1; z>0; --z){
	             B[j][i]=a[i]*z;
	             a[i]=B[j][i];
		        }
		    }
		    
		 if(j==2){
		   	 B[j][i]=A[i]*A[i];
		    }
		    
		printf("%d \n", B[j][i]);
		    
	    }
	}

	
	return 0;
}
