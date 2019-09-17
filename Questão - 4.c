#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int opcao;
	do{
		
		printf ("\nMENU\n"
				"Escolha uma Opção\n"
				"Opção - 1. Para saber se o numero é PAR ou não. \n"
				"Opção - 2. Para calcular uma potência. \n"
				"Opção - 3. Para calcular uma raiz. \n"
				"Opção - 4\n"
				"Opção - 5\n"
				"Opção - 6\n"
				"Opção - 7\n"
				"Opção - 8\n"
				"Opção - 9\n"
				"Opção - 10\n");
		
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
			case 4:
				printf("Onde voce esta\n\n");
				break;
			case 5:
				printf("Para onde vai\n\n");
				break;
			case 6:
				printf("Como chegou ai\n\n");
				break;
			case 7:
				printf("O que esta fazendo\n\n");
				break;
			case 8:
				printf("Vamos la\n\n");
				break;
			case 9:
				printf("Para com isso\n\n");
				break;
			case 10:
				printf("Isso ai\n\n");
				break;
			default:
				printf("Numero Invalido!\n\n");
				break;	
		}	
	}while (opcao != 0);
}
