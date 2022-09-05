/*Fa�a um Programa para uma loja de tintas. O programa dever� pedir o tamanho em metros 
quadrados da �rea a ser pintada. Considere que a cobertura da tinta � de 1 litro para cada 6 metros 
quadrados e que a tinta � vendida em latas de 18 litros, que custam R$ 80,00 ou em gal�es de 3,6 litros, 
que custam R$ 25,00.Informe ao usu�rio as quantidades de tinta a serem compradas e os respectivos pre�os 
em 2 situa��es:
a. comprar apenas latas de 18 litros;
b. comprar apenas gal�es de 3,6 litros;
*/


# include <stdio.h>
# include <locale.h>
int main(){
	//Configura��es e vari�veis
	setlocale(LC_ALL,"");	
    int a, litros, metros, lataA, lataB, precoA, precoB;
    printf("D�gite aqui a quantidade em M� que voc� quer pintar \n");
    scanf("%d", &metros);
    
    litros = metros / 6;
    a = litros + 0.99;
    lataA = litros / 18;
    lataB = litros / 3.6;
    precoA = lataA * 80;
    precoB = lataB * 25;
    
    printf("Com as latas de 18 litros voc� precisar� de %d latas, que custa %d \n", lataA, precoA);
    printf("Com as latas de 3,6 litros voc� precisar� de %d laas, que custam %d", lataB, precoB);
}
