#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int opcao;
	
	do{
	
		printf ("\n====================MENU======================\n\n"
			"Escolha uma Opção\n"
			"Opção - 1. Para saber se o numero é PAR ou não. \n"
			"Opção - 2. Para calcular uma potência. \n"
			"Opção - 3. Para calcular uma raiz. \n"
			"Opção - 4. Para saber se o ano é bissexto. \n"
			"Opção - 5. Para calcular a média ponderada das 3 notas. \n"
			"Opção - 6. Para calcular a médias das notas e saber se são válidas. \n"
			"Opção - 7. Para receber uma mensagem.\n"
			"Opção - 8. Para receber uma mensagem.\n"
			"Opção - 9. Para receber uma mensagem.\n"
			"Opção - 10. Informe seu nome e sua matricula. \n\n"
			"         DIGITE 0 PARA SAIR \n"                 );
		
		printf("\nOpção:");
		scanf("%d",&opcao);
		
		switch(opcao)
		{
			
			case 0:
				printf("Saiu!\n\n");
				break;
			case 1:
				int num1;
				
				printf("Digite um numero: ");
				scanf("%d", &num1);
				
				if(num1 % 2 == 0){
					printf("%d é PAR\n", num1);
				}else{
					printf("%d não é PAR\n", num1);
				}
				break;
			case 2:{
				float A, resultado;
				int B;
				printf ("Digite um numero Flutuante: ");
				scanf ("%f", &A);
				
				printf ("\nDigite um numero Inteiro: ");
				scanf ("%d", &B);
				
				resultado = pow (A, B);
				
				printf ("Valor da potência: %.3f\n", resultado);
				break;
			}
			case 3:{
				float A, resultado;
				int B;
				
				printf ("Digite um numero Flutuante: ");
				scanf ("%f", &A);
				
				printf ("Digite um numero Inteiro: ");
				scanf ("%d", &B);
				
				resultado = pow(A, 1./B);
				
				printf ("Resultado da Raiz: %.3e\n", resultado);
				break;
			}
			case 4:{
				int ano,bissexto;
				
				printf("Digite um ano para saber se ele é bissexto: ");
				scanf ("%d", &ano);
				
				bissexto = ano%4;
				
				if (bissexto == 0){
					printf ("\nAno Bissexto\n");
				}else{
					printf ("\nNão é Bissexto\n");
				}
				break;
			}
			case 5:{
				float n1, n2, n3, media;
				
				printf ("Digite as 3 notas: \n");
				scanf ("%f %f %f",&n1, &n2, &n3);
				
				media = (n1+n2+n3*2)/4;
				
				if(media >= 6){
					printf("Você passou com %0.2f de média\n", media);
				}
				else{
					printf("Voce foi reprovado com %0.2f de média", media);
				}
				break;
			}
			case 6:{
				float n1, n2,media;
				
				printf ("Digite as 2 notas: ");
				scanf ("%f %f",&n1, &n2);
				
				if ((n1 >= 0) && (n1 <= 10) && (n2 >= 0) && (n2 <= 10))
				{
					media = (n1 + n2)/ 2;
					printf ("É válida! E a média é %0.2f\n", media);
				}
				else{
					printf ("Não é válida\n");
				}
				break;
			}
			case 7:
				printf("O que esta fazendo\n\n");
				break;
			case 8:
				printf("Vamos la\n\n");
				break;
			case 9:
				printf("Para com isso\n\n");
				break;
			case 10:{
				char nome[61];
				int mtc;
				
				printf ("Digite seu nome: ");
				scanf ("%s", &nome);
				
				printf ("Digite sua matricula: ");
				scanf ("%d", &mtc);
		
				printf ("Oi %s sua matricula em Hexadecimal é: %2X\n", nome, mtc);
				break;
			}	
	}while (opcao != 0);
}
