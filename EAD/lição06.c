/*Fa�a um programa para um caixa eletr�nico. O programa dever� perguntar ao usu�rio a valor do 
saque e depois informar quantas notas de cada valor ser�o fornecidas. As notas dispon�veis ser�o as de 1, 
5, 10, 50 e 100 reais. O valor m�nimo � de 10 reais e o m�ximo de 600 reais. O programa n�o deve se 
preocupar com a quantidade de notas existentes na m�quina.
Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas notas de 100, uma nota de 
50, uma nota de 5 e uma nota de 1;
Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece tr�s notas de 100, uma nota de 
50, quatro notas de 10, uma nota de 5 e quatro notas de 1.
*/


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	//Configura��es e vari�veis
	setlocale(LC_ALL,"");
	int saque = -1;
	int nota100 = 0,nota50 = 0,nota10 = 0, nota5 = 0,nota1 = 0;
	while(saque < 10 || saque > 600){
		printf("D�gite o valor que o senhor(a) deseja ser sacado: ");
		scanf("%d", &saque);
	//Processamento
	}
	while(saque >= 100){
		nota100++;
		saque = saque -100;
	}
	while(saque >= 50){
		saque = saque -50;
		nota50++;
	}
	while(saque >= 10){
		saque = saque -10;
		nota10++;
	}
	while(saque >= 5){
		saque = saque -5;
		nota5++;
	}
	while(saque >= 1){
		saque = saque -1;
		nota1++;
	}
	//Sa�da
	if (saque == 0){
		
		printf("Retire abaixo no local indicado\n");
		printf("%d notas de 100\n", nota100);
		printf("%d notas de 50\n", nota50);
		printf("%d notas de 10\n", nota10);
		printf("%d notas de 5\n", nota5);
		printf("%d notas de 1\n", nota1);
		printf("Tenha um bom-dia!");
		
	}
	return 0;
	system ("pause");
}
