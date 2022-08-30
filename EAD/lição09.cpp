/*O Sr. Manoel Joaquim acaba de adquirir uma panificadora e pretende implantar a metodologia da 
tabelinha, que j� � um sucesso na sua loja de 1,99. Voc� foi contratado para desenvolver o programa que 
monta a tabela de pre�os de p�es, de 1 at� 50 p�es, a partir do pre�o do p�o informado pelo usu�rio, 
conforme o exemplo abaixo:
Pre�o do p�o: R$ 0.18
Panificadora P�o de Ontem - Tabela de pre�os
1 - R$ 0.18
2 - R$ 0.36
...
50 - R$ 9.00
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"");
	float i,pao;
	
	printf("D�gite o valor do p�o: ");
	scanf("%f", &pao);
	printf("Panificadora P�io de Ontem - tabela de pre�os");
	
	for(i = 1; i <= 50; i++){
		printf("%.0f - R$ %.2f\n",i,i*pao);
	}
}
