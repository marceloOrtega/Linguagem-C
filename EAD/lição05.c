#include <stdio.h>
#include <locale.h>
#include <math.h> 
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"");
	float a,b,c,delta,raiz1,raiz2;
	printf("Insira um valor para ser adotado como A: ");
	scanf ("%f", &a);
	
	printf("\nInsira um valor para ser adotado como B: ");
	scanf ("%f", &b);
	
	printf("\nInsira um valor para ser adotado como C: \n");
	scanf ("%f", &c);
	
	//ax2 + bx + c
	// delta = b2 - 4*a*c
	// x1 e x2 = -b +- sqrt (delta) / 2*a
	
	 if (a != 0){
		delta = (b*b)- 4*a*c;
		    if (delta==0){
		    	raiz1 = (-b + sqrt (delta))/ (2*a);
		    	printf("\nO delta deu 0(zero)");
		    	printf("\n As raizes serao iguais a : %.2f ", raiz1);
	}else {
		if (delta > 0 ){
			raiz1 = (-b + sqrt (delta))/ (2*a);
			raiz2 = (-b - sqrt (delta))/ (2*a);
			
			printf("\nO delta eh MAIOR que 0(zero)!");
			printf("\nA primeira raiz eh igual a: %.2f",raiz1);
			printf("\nA segunda raiz eh igual a: %.2f",raiz2);
			
	}else { 
	    printf("\nDelta menor que 0(zero)!\n");
	    printf("\nNao existe raizes Reais!!");
		}
		
	}
	}else {
		printf("\nEssa nao eh uma equacao do segundo grau!");
		printf("\nTente novamente!");
		printf ("\nMas dessa vez experimente adotar um valor para A diferente de 0");
	}
	return 0;
	system("pause"); 
}
