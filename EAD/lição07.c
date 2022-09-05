/*Faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:
a. "Telefonou para a vítima?"
b. "Esteve no local do crime?"
c. "Mora perto da vítima?"
d. "Devia para a vítima?"
e. "Já trabalhou com a vítima?"
*/

#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

int main(){
setlocale(LC_ALL,"");
char a='n';
int cont=0;


cout<<"Telefonou para a vítima?";
cin>>a;
if(a=='s'){
    cont++;
    a='n';

}

cout<<"Esteve no local do crime?";
cin>>a;
if(a=='s'){
    cont++;
    a='n';

}

cout<<"Mora perto da vítima?";
cin>>a;
if(a=='s'){
    cont++;
    a='n';
}

cout<<"Devia para a vítima?";
cin>>a;
if(a=='s'){
    cont++;
    a='n';
}

cout<<"Já trabalhou com a vítima?";
cin>>a;
if(a=='s'){
    cont++;
    a='n';
}

if(cont==2){
    cout<<"você é Suspeito";
}
else if((cont=2) || (cont=3)){
    cout<<"você é cumplice";

}
else if(cont=4){
    cout<<"você é o Assasino";
}
else{
    cout<<"você é Inocente";
}


return 0;
}
