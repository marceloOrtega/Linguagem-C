#include <stdio.h>
#include <stdlib.h>

int main()
{
float preco, troco, dinheiro, total;
int i;
total = 0;
i = 1;
preco = 1;
printf("LOJAS TABAJARA \n");
printf("Insira o valor de seus produtos. \nDigite 0 para finalizar a insercao.\n \n");
while (preco > 0)
{
    printf ("Insira o Preco do Produto: \n", i);
    scanf("%f", &preco);
    i = i+1;
    total = total + 1;
}
    printf("Total a pagar: R$ %4.2f \n", total);
    printf("Insira o valor pago: R$ %4.2f \n");
    scanf("%f", &dinheiro);
    troco = dinheiro - total;
    printf("Troco: R$ %4.2f", troco);

system ("PAUSE");
system ("CLS");
}
