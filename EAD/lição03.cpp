/*Faça um Programa para uma loja de tintas. O programa deverá pedir o tamanho em metros 
quadrados da área a ser pintada. Considere que a cobertura da tinta é de 1 litro para cada 6 metros 
quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00 ou em galões de 3,6 litros, 
que custam R$ 25,00.Informe ao usuário as quantidades de tinta a serem compradas e os respectivos preços 
em 2 situações:
a. comprar apenas latas de 18 litros;
b. comprar apenas galões de 3,6 litros;
*/


# include <stdio.h>
# include <locale.h>
int main(){
	//Configurações e variáveis
	setlocale(LC_ALL,"");	
    int a, litros, metros, lataA, lataB, precoA, precoB;
    printf("Dígite aqui a quantidade em M² que você quer pintar \n");
    scanf("%d", &metros);
    
    litros = metros / 6;
    a = litros + 0.99;
    lataA = litros / 18;
    lataB = litros / 3.6;
    precoA = lataA * 80;
    precoB = lataB * 25;
    
    printf("Com as latas de 18 litros você precisará de %d latas, que custa %d \n", lataA, precoA);
    printf("Com as latas de 3,6 litros você precisará de %d laas, que custam %d", lataB, precoB);
}
