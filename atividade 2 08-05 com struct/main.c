#include <stdio.h>
#include <stdlib.h>

/*receba dados de nome e alturas de 5 pessoas e mostre como resultado: 
a)lista com os dados 
b)nome e valor da altura
*/
 struct NeA{
 	char nome[50];
 	float altura;
 }NeA[5];
 
 main(){
 	int i ;
for(i=0;i<5;i++){
	printf("insira seu nome: ");
		scanf("%s" ,NeA[i].nome);
	printf("insira a altura de  %s" ,NeA[i].nome);
		scanf("%f" ,NeA[i].altura);
}
for(i=0;i<5;i++){
	printf("\n %s ", NeA[i].nome);
	printf(" %.2f \n", NeA[i].altura);
}
system("pause");
}
