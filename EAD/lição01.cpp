/* Atividade 01 João pescador
						*/
						
#include <stdio.h>
#include <locale.h>

float peso, excesso, multa, pesolimite=50;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Olá seu joao Quantos quilos de peixe o senhor pescou hoje\n");
	scanf("%f", &peso);
	
	
	if (peso>pesolimite){
		excesso = peso - pesolimite;
		multa = excesso * 4.00;
		printf("\nVai precisar pagar multa seu joao O valor da multa  de R$ %.2f\n", multa);
		}else{
			printf("\nNao e necessario pagar multa seu joao o peixe pesa apenas %.2f kg!\n", peso);		
		}
	return 0;
}




