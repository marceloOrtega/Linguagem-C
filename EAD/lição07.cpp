#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

int main(){
setlocale(LC_ALL,"");
char a='n';
int cont=0;


cout<<"Telefonou para a v�tima?";
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

cout<<"Mora perto da v�tima?";
cin>>a;
if(a=='s'){
    cont++;
    a='n';
}

cout<<"Devia para a v�tima?";
cin>>a;
if(a=='s'){
    cont++;
    a='n';
}

cout<<"J� trabalhou com a v�tima?";
cin>>a;
if(a=='s'){
    cont++;
    a='n';
}

if(cont==2){
    cout<<"voc� � Suspeito";
}
else if((cont=2) || (cont=3)){
    cout<<"voc� � cumplice";

}
else if(cont=4){
    cout<<"voc� � o Assasino";
}
else{
    cout<<"voc� � Inocente";
}


return 0;
}
