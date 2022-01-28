/*Escriba un programa que reciba una cadena de caracteres y cambie las letras minúsculas por ma-
yúsculas, los demás caracteres no deben ser alterados.

Ejemplo: se recibe Man-zana debe mostrar MAN-ZANA.
Nota: la salida del programa debe ser: Original: Man-zana. En mayuscula: MAN-ZANA.*/
#include <iostream>
using namespace std;

int main()
{
char Palabra[]= "Hola mUndo 1 2 546 -- ";
int i = 0;
while(Palabra[i]!='\0'){
    if(Palabra[i]>= 'a' and Palabra[i] <= 'z'){
        Palabra[i] = Palabra[i] - ('a' - 'A');
        }
    i++;
    }
cout<<Palabra<<endl;
    return 0;
}
