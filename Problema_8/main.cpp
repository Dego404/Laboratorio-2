/*Escriba un programa que reciba una cadena de caracteres y separe los números del resto de caracteres,
generando una cadena que no tiene números y otra con los números que había en la cadena original.

4

Ejemplo: Si se recibe abc54rst el programa debe imprimir las cadenas: abcrst y 54.
Nota: la salida del programa debe ser:
Original: abc54rst.
Texto: abcrst. Numero: 54.*/

#include <iostream>

using namespace std;
char TexLetras[50];
string numeros;
string letras;
int main(){
int i = 0;
cout<<"Ingrese un mensaje con numeros y letras: "<<endl;
cin>>TexLetras;
while(i<sizeof (TexLetras)-1){
    if(isdigit(TexLetras[i])){
        numeros = numeros + TexLetras[i];
        }
    else{
        letras = letras+TexLetras[i];
        }
i++;
}
cout<<"Los numeros de la cadena son: "<<numeros<<endl;
cout<<"Las letras de la cadena son: "<<letras<<endl;

    return 0;
}
