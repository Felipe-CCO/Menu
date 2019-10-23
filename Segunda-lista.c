#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int opcao;
	do{
// Esse é o Menu que o usuario irá Visualizar quando executar o programa	
		printf ("\n==================== MENU ======================\n\n"
				"Escolha uma Opção\n"
				"Opção - 1. Para saber se o número é PAR ou não. \n"
				"Opção - 2. Para calcular uma potência. \n"
				"Opção - 3. Para calcular uma raiz. \n"
				"Opção - 4. Para saber se o ano é bissexto. \n"
				"Opção - 5. Para calcular a média ponderada das 3 notas. \n"
				"Opção - 6. Para calcular as médias das notas e saber se são válidas. \n"
				"Opção - 7. Para saber o fatorial de um número.\n"
				"Opção - 8. Para saber se um número é Primo ou Não .\n"
				"Opção - 9. Para imprimir a sequencia de fibo até um numero.\n"
				"Opção - 10. Informe seu nome e sua matricula. \n\n"
				"         DIGITE 0 PARA SAIR \n"                 );
		
		printf("\nOpção:");
		scanf("%d",&opcao);
		
		switch(opcao)
		{
//Quando o usuario digitar o numero 0 fecha o programa	
			case 0:
				printf("Saiu!\n\n");
				break;
//Caso o usuario escolha a opção 1 esse programa executará
			case 1:{
				int num1;
		//Entrada		
				printf("Digite um numero: ");
				scanf("%d", &num1);
		//Processamento
				if(num1 % 2 == 0){
		//Saída
					printf("%d é PAR\n", num1);
				}else{	
					printf("%d não é PAR\n", num1);
				}
				break;
			}
//Caso escolha a opção 2 esse executará
			case 2:{
				float A, resultado;
				int B;
		//Entrada		
				printf ("Digite um numero Flutuante: ");
				scanf ("%f", &A);
				
				printf ("\nDigite um numero Inteiro: ");
				scanf ("%d", &B);
		//Processamento	
				resultado = pow (A, B);
		//Saída	
				printf ("Valor da potência: %.3f\n", resultado);
				break;
			}
//Caso escolha a opção 3 esse executará
			case 3:{
				float A, resultado;
				int B;
		//Entrada		
				printf ("Digite um numero Flutuante: ");
				scanf ("%f", &A);
				
				printf ("Digite um numero Inteiro: ");
				scanf ("%d", &B);
		//Processamento
				resultado = pow(A, 1./B);
		//Saída
				printf ("Resultado da Raiz: %.3e\n", resultado);
				break;
			}
//Caso escolha a opção 4 esse executará
			case 4:{
				int ano,bissexto;
		//Entrada		
				printf("Digite um ano para saber se ele é bissexto: ");
				scanf ("%d", &ano);
			//Processamneto	
				bissexto = ano%4;
			//Saída	
				if (bissexto == 0){
					printf ("\nAno Bissexto\n");
				}else{
					printf ("\nNão é Bissexto\n");
				}
				break;
			}
//Caso escolha a opção 5 esse executará
			case 5:{
				float n1, n2, n3, media;
		//Entrada		
				printf ("Digite as 3 notas: \n");
				scanf ("%f %f %f",&n1, &n2, &n3);
		//Processamento		
				media = (n1+n2+n3*2)/4;
		//Saída		
				if(media >= 6){
					printf("Você passou com %0.2f de média\n", media);
				}
				else{
					printf("Voce foi reprovado com %0.2f de média", media);
				}
				break;
			}
//Caso escolha a opção 6 esse executará
			case 6:{
				float n1, n2,media;
		//Entrada		
				printf ("Digite as 2 notas: ");
				scanf ("%f %f",&n1, &n2);
		//Processamento
		//Os printf serão as saídas	
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
			case 7:{
				int n;
				int fat = 1;
				int menos = 0;
				int i = 0;
				
				printf ("\n\nDigite um numero:");
				scanf ("%d",&n);
				
				int limite = n;
		
				for(i = 1; i < limite; i++){
					menos = i - 1;
					fat *= (n- menos);
				}
					printf ("\nO fatorial do numero é: %d\n\n", fat);
				break;
			}
			case 8:{
				int i, num, resultado;
		
				printf("Digite um número: ");
				scanf("%d", &num);	
		
				for (i = 2; i <= num /2; i++){
		
					if(num % i == 0){

					resultado++;
					}	
				}
				if(resultado == 0){
					printf("%d é Primo", num);
					
				}else{
					printf("%d não é primo", num);
				}
				break;
			}
			case 9:
				int numero;
				int i;
				int fi1=1;
				int fi2=1;
				int soma;
				
				printf("\n\nDigite um numero para imprimir a sequencia de fibo ate ele: ");
				scanf("%d", &numero);
				
				for(i=1; i<=numero; i++){
					if(i == 1|| i == 2){
						printf("%d \n", fi1 );
					}
					else{
						soma=fi1+fi2;
						fi1=fi2;
						fi2=soma;
						printf("%d \n", soma);
					}
				}
				printf("\n\n");
				break;
//Caso escolha a opção 10 esse programa executará
			case 10:{
				char nome[61];
				int mtc;
//Entrada				
				printf ("Digite seu nome: ");
				scanf ("%s", &nome);
				
				printf ("Digite sua matricula: ");
				scanf ("%d", &mtc);
//Processamento/Saída		
				printf ("Oi %s sua matricula em Hexadecimal é: %2X\n", nome, mtc);
				break;
			}
//Caso escolha uma opção que não esteja entre 1 e 9, exibirá este mensagem
			default:
				printf("Opção Invalido!\n\n");
				break;	
		}
//Enquanto o usuário não digitar 0 para sair, o MENU continua sendo exibido
	}while (opcao != 0);
}
