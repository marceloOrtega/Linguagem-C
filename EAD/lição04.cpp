/*As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e  contrataram um programador para desenvolver o programa que calculará os reajustes. Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério,
baseado no salário atual:
salários até R$ 280,00 (incluindo) : aumento de 20%
salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
saláriosos de R$ 1500,00 em diante : aumento de 5% Após o aumento ser realizado, informe na tela:
o salário antes do reajuste;
o percentual de aumento aplicado;
o valor do aumento;
o novo salário, após o aumento.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
    float s,s1,s2,s3,s4,st1,st2,st3,st4;
    setlocale(LC_ALL,"");
    //entrada
    printf("Informe o seu salário:");
    scanf("%f",&s);
    //processamento
    printf("\nSeu salário antes do reajuste é de: %.2f",s);
    
     if(s<=280){
        printf("\nO percentual do seu aumento é de 20%");
    }else if(s<=700&&s>280){
        printf("\nO percentual do seu aumento é de 15%");
    }else if(s>700&&s<=1500){
        printf("\nO percentual do seu aumento é de 10%");
    }else if(s>1500){
        printf("\nO percentual do seu aumento é de 5%");
    }else{
        printf("\nSalário incorreto");
    }
    
    s1= s*0.20;
    s2= s*0.15;
    s3= s*0.10;
    s4= s*0.05;
    
    if(s<=280){
        printf("\nO aumento no seu salário foi de: %.2f",s1);
    }else if(s<=700&&s>280){
        printf("\nO aumento no seu salário foi de: %.2f",s2);
    }else if(s>700&&s<=1500){
        printf("\nO aumento no seu salário foi de: %.2f",s3);
    }else if(s>1500){
        printf("\nO aumento no seu salário foi de: %.2f",s4);
    }else{
        printf("\nSalário incorreto");
    }
    
    st1= s+s1;
    st2= s+s2;
    st3= s+s3;
    st4= s+s4;
    
    if(s<=280){
        printf("\nSeu alário final é de: %.2f",st1);
    }else if(s<=700&&s>280){    
        printf("\nSeu salário final é de: %.2f",st2);
    }else if(s>700&&s<=1500){
        printf("\nSeu salário final é de: %.2f",st3);
    }else if(s>1500){
        printf("\nSeu salário final é de: %.2f",st4);
    }else{
        printf("\nSalário incorreto");
    }
}
