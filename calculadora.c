#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int opcao;
	float resultado, primeiroNumero, segundoNumero;
	
	printf("\r\nCalculadora da Alegria\r\n");
	printf("\rSelecione uma das op��es:\r\n");
	printf("\r\n1 - Soma\r\n");
	printf("\r\n2 - Subtra��o\r\n");
	printf("\r\n3 - Multiplica��o\r\n");
	printf("\r\n4 - Divis�o\r\n");
	
	scanf("%d", &opcao);
	printf("\r\nDigite o primeiro numero: ");
	scanf("%f", &primeiroNumero);
	printf("\r\nDigite o segundo numero: ");
	scanf("%f", &segundoNumero);
	
	switch(opcao){
		case 1:
			resultado = primeiroNumero + segundoNumero;
			break;
		case 2:
			resultado = primeiroNumero - segundoNumero;
			break;
		case 3:
			resultado = primeiroNumero * segundoNumero;
			break;
		case 4:
			if(segundoNumero == 0)
			{
				return 0;	
			}
			resultado = primeiroNumero / segundoNumero;
			break;
		default:
			printf("\nSeu corno, digita a op��o certa\n\r");
		return 0;
	}
		
	
	
	/*
	if(opcao == 1)
	{
		resultado = primeiroNumero + segundoNumero;	
	}
	else if(opcao == 2)
	{
		resultado = primeiroNumero - segundoNumero;
	}	
	else if(opcao == 3)
	{
		resultado = primeiroNumero * segundoNumero;
	}	
	else if(opcao == 4)
	{
		resultado = primeiroNumero / segundoNumero;
	}
		
	else()
	{
		printf("\nSeu corno, digita a op��o certa\n\r");
		return 0;
	}
	*/
	printf("\r\nO resultado da sua opera��o �: %.2f", resultado);
	
	
	
	
	
	
	
}
