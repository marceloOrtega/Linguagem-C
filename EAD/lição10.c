/*O Sr. Manoel Joaquim expandiu seus negócios para além dos negócios de 1,99 e agora possui uma
loja de conveniências. Faça um programa que implemente uma caixa registradora rudimentar. O programa
deverá receber um número desconhecido de valores referentes aos preços das mercadorias. Um valor zero
deve ser informado pelo operador para indicar o final da compra. O programa deve então mostrar o total da
compra e perguntar o valor em dinheiro que o cliente forneceu, para então calcular e mostrar o valor do
troco. Após esta operação, o programa deverá voltar ao ponto inicial, para registrar a próxima compra. A
saída deve ser conforme o exemplo abaixo:
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){ 
	//Configurações e variáveis
	setlocale(LC_ALL,"");
	float preco, troco, dinheiro, total;
	int i;
	total = 0;
	i = 1;
	preco = 1;
	//Entrada
	printf("LOJAS TABAJARA \n");
	printf("Insira o valor de seus produtos. \nDigite 0 para finalizar a insercao.\n \n");
	while (preco > 0)
	{
	//Processamento
    printf ("Insira o Preco do Produto: \n", i);
    scanf("%f", &preco);
    i = i+1;
    total+=preco;
	}
    printf("Total a pagar: R$ %.2f \n", total);
    printf("Insira o valor pago: R$ %.2f \n");
    scanf("%f", &dinheiro);
    troco = dinheiro - total;
    printf("Troco: R$ %.2f", troco);
    printf("---------ATÉ A PRÓXIMA---------");
	//Saída
	system("cls");
	system("pause");
	
}
