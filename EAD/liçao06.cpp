/*Faça um programa para um caixa eletrônico. O programa deverá perguntar ao usuário a valor do
saque e depois informar quantas notas de cada valor serão fornecidas. As notas disponíveis serão as de 1,
5, 10, 50 e 100 reais. O valor mínimo é de 10 reais e o máximo de 600 reais. O programa não deve se
preocupar com a quantidade de notas existentes na máquina.
Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas notas de 100, uma nota de
50, uma nota de 5 e uma nota de 1;
Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece três notas de 100, uma nota de
50, quatro notas de 10, uma nota de 5 e quatro notas de 1.
*/


#include<stdio.h>
#include <locale.h>

int realizarSaque(int valor, int *cedulas){
	setlocale(LC_ALL,"");
    int n100,n50,n10,n5,n1;

    n100=valor/50;
    n50=(valor%100)/50;
    n10=((valor%100)%50)/10;
    n5=(((valor%100)%50)%10)/5;
    n1=(((((valor)%100)%50)%10)%5)/1;
    
    printf("\n%d cedula(s) de 100.00",n100);       
    printf("\n%d cedula(s) de 50.00",n50);
    printf("\n%d cedula(s) de 10.00",n10);
    printf("\n%d cedula(s) de 5.00",n5);
    printf("\n%d cedula(s) de 1.00",n1);
    return 0;
    }

int main()
{
    int valor, cedulas[5] = { 100, 50, 10, 5, 1};
    
    printf("Digite o valor a ser sacado: ");
    scanf("%d", &valor);
    
    if(valor == 1 || valor == 3){
        printf("não e possivel sacar o valor solicitado");
        return 0;
    }
    if(valor > 0){
    realizarSaque(valor, cedulas);
    return 0;
    }
    if(valor <= 0){
        printf("Informe um valor maior que 0");
        return 0;
    }
    else{
        main();
    }
    return 0;
}

