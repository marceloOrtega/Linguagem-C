# include <stdio.h>
# include <locale.h>
int main()
{
	setlocale(LC_ALL,"");
    float vh, ht, sb, ir, in, sind, sl;
    //Entrada
    printf("Quanto você ganha por hora R$: ");
    scanf("%f", &vh);
    
    printf("Números de horas trabalhadas: ");
    scanf("%f", &ht);
    
    //Processamento
    sb = vh * ht;
    ir = sb * 11 / 100;
    in = sb * 8 / 100;
    sind = sb * 5 / 100;
    sl = sb - ir - in - sind;
    printf("+ Salário Bruto: R$%.2f\n", sb);
    printf("- IR (11%%): R$%.2f\n", ir);
    printf("- INSS (8%%): R$%.2f\n", in);
    printf("- Sindicato (5%%): R$%.2f\n", sind);
    printf("= Salário Líquido: R$%.2f\n", sl);
    return 0;
}
