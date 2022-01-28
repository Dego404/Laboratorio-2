/*Haga una función que reciba una cadena de caracteres numéricos, la convierta a un número entero
y retorne dicho número. Escriba un programa de prueba.
Ejemplo: si recibe la cadena “123”, debe retornar un int con valor 123.*/

#include <iostream>

using namespace std;
int Cadena_a_Entero(char cadena[]){
    int i = 0, n = 0, sign = 1;
    if(cadena[i]=='-'){
        sign = -1;
        i++;
    }
    while(cadena[i]!='\0'){
        n = 10*n + (cadena[i]-'0');
        i++;
    }
    return (n*sign);
}

int main()
{
    char cadena[]="126203";
    int a = Cadena_a_Entero(cadena);
    cout<<a<<endl;

    return 0;
}

