#include <stdio.h>

int main()
{
	int opcao;
	do{
		
		printf ("\nMENU\n"
				"Escolha uma opcao\n"
				"Opcao - 1. Digite um numero para dizer se ele e par ou nao\n"
				"Opcao - 2\n"
				"Opcao - 3\n"
				"Opcao - 4\n"
				"Opcao - 5\n"
				"Opcao - 6\n"
				"Opcao - 7\n"
				"Opcao - 8\n"
				"Opcao - 9\n"
				"Opcao - 10\n");
		
		
		scanf("%d",&opcao);
		
		switch(opcao)
		{
			
			case 0:
				printf("Saiu!\n\n");
				break;
			case 1:
				int num1;
				printf("Digite um numero:");
				scanf("%d", &num1);
				
				if(num1 % 2 == 0){
					printf("%d e par\n", num1);
				}else{
					printf("%d nao e par\n", num1);
				}
				break;
			case 2:
				printf("Tudo Bem\n\n");
				break;
			case 3:
				printf("Como vai\n\n");
				break;
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
