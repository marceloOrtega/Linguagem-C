/*O Sr. Manoel Joaquim expandiu seus neg�cios para al�m dos neg�cios de 1,99 e agora possui uma
loja de conveni�ncias. Fa�a um programa que implemente uma caixa registradora rudimentar. O programa
dever� receber um n�mero desconhecido de valores referentes aos pre�os das mercadorias. Um valor zero
deve ser informado pelo operador para indicar o final da compra. O programa deve ent�o mostrar o total da
compra e perguntar o valor em dinheiro que o cliente forneceu, para ent�o calcular e mostrar o valor do
troco. Ap�s esta opera��o, o programa dever� voltar ao ponto inicial, para registrar a pr�xima compra. A
sa�da deve ser conforme o exemplo abaixo:
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){ 
	//Configura��es e vari�veis
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
    printf("---------AT� A PR�XIMA---------");
	//Sa�da
	system("cls");
	system("pause");
	
}
