#include<stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

 typedef struct{
 	char nome[80];
 	int idade;
 	long int telefone;
 	char end[80];
 }Agenda;
 
 Agenda pessoa[5], copia[5], aux, corretor ;
 
 int i, j, r, a;
 int casos;
 
void invalido(){
	system("cls");
	printf("Opção inaválida. Redirecionando para o menu...");
}
 
void cadastro(){
	system("cls");
	for( i=0 ; i<=4 ; i++){
	printf("Insira o nome da pessoa %d: \n", i+1);
	fflush(stdin);
	fgets(pessoa[i].nome, 80, stdin);
	printf("Insira idade da pessoa %d: \n", i+1);
	scanf("%d", &pessoa[i].idade);
	printf("Insira telefone da pessoa %d: \n", i+1);
	scanf("%d", &pessoa[i].telefone);
	printf("Insira endereço da pessoa %d: \n", i+1);
	fflush(stdin);
	fgets(pessoa[i].end, 80, stdin); 
    }
}

void pesquisa(){
	system("cls");
	int a, j, p;
		printf("Lembre que é preciso fazer os cadastros antes! Insira uma idade a ser pesquisada: \n");
		scanf("%d", &p);
		fflush(stdin);
		
        j=0;
	    a=0;
	   while (j<=5 && a==0 ){
		if (pessoa[j].idade==p){
			a=1;
		}
		else {
			j = j + 1;
		}
		if (a==1){
			printf("\n Essa idade pertence à %s", pessoa[j].nome);
	    }
}
}

void ordem(){
	system("cls");
	for(i=0; i<=4;++i){
			strcpy(copia[i].nome, pessoa[i].nome);
		}
		
	for(i=0;i<=4;++i){
		for(j=i+1;j<=4;++j){		
			 r = strcmp(copia[i].nome, copia[j].nome);
		     if(r>0){
				 strcpy(aux.nome, copia[i].nome);
				 strcpy(copia[i].nome, copia[j].nome); 
				 strcpy(copia[j].nome, aux.nome);
			    }
		    }
		}
		
	printf("\n Os nomes em ordem alfabetica são: \n");
	for(i=0;i<=4;++i){
		printf("%s", copia[i].nome);
		}
}

void alterar(){
	system("cls");
		printf("De qual pessoa você gostaria de alterar os dados? \n 1.%s \n 2.%s \n 3.%s \n 4.%s \n 5.%s \n", pessoa[0].nome, pessoa[1].nome, pessoa[2].nome, pessoa[3].nome, pessoa[4].nome);
		scanf("%d", &a);
		fflush(stdin);
		
		
		printf("- - - Insira as novas informações - - - \n");
		
		printf("Insira um nome para a pessoa \n");
		scanf("%49[^\n]s", &corretor.nome);
		fflush(stdin);
		
		printf("Insira um endereco para a pessoa \n");
		scanf("%49[^\n]s", &corretor.end);
		fflush(stdin);
		
		printf("Insira uma idade para a pessoa \n");
		scanf("%d", &corretor.idade);
		fflush(stdin);
		
		printf("Insira um telefone para a pessoa\n");
		scanf("%49[^\n]s", &corretor.telefone);
		fflush(stdin);
		
		strcpy(pessoa[a-1].nome, corretor.nome);
		strcpy(pessoa[a-1].end, corretor.end);
	    pessoa[a-1].idade = corretor.idade;
		pessoa[a-1].telefone = corretor.telefone; 
}

int main(){
  setlocale(LC_ALL, "Portuguese");
  while (1){
  printf("\n \n Menu da Agenda: \n \n 1.Cadastro \n 2.Pesquisa de registro por idade \n 3.Classificação alfabética \n 4.Alteração de registro digitado com erro \n 5.Sair do Menu \n \n Escolha uma opção \n");
  scanf("%d", &casos);
  switch (casos){
  case 1: cadastro(); break;
  case 2: pesquisa (); break;
  case 3: ordem (); break;
  case 4: alterar(); break;
  case 5: return 0; break; 
  }
  if(casos <=0 || casos >= 6){
  	invalido();
  }
}
}

