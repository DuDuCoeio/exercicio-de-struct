#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*faça um programa q receba como dados e de entrada o nome e o salario de 5 funcionarios ao final mostre a lista com nomes e salarios digitados e 
a media de salarios*/

struct informacoesFuncionarios{
	char nome[50];
	float salario;
}fun[5];

main() {
	int i;
	float soma=0 ;
for(i=0;i<5;i++){

	printf("insira seu nome: ");
	    scanf("%s" ,&fun[i].nome);	  
	printf("insira o salario de: %s",fun[i].nome);
	    scanf("%f" ,&fun[i].salario);
			soma+=fun[i].salario;
}
for(i=0;i<5;i++){
	printf("\n %s ", fun[i].nome);
	printf(" %.2f \n", fun[i].salario);
}
printf("a media foi : %.2f \n" ,soma/5);


system("pause");
}
