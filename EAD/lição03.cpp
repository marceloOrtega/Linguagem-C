# include <stdio.h>
# include <locale.h>
int main(){
	//Configurações e variáveis
	setlocale(LC_ALL,"");	
    float area, litros, latas, valor;
    //Entrada
    printf("Tamanho da área: ");
    scanf("%f", &area);
    //Processamento
    litros = area / 6;
    latas = litros - 18;
    valor = latas * 80;
    printf("Quantidades de latas: %.0f\n", latas);
    printf("Preço total R$:%.2f\n", valor);
    return 0;
}
