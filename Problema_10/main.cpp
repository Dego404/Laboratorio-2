/*Escribir un programa que permita convertir un número en el sistema romano al sistema arábigo

usado actualmente. A continuación se encuentran los caracteres usados en el sistema romano y su equivalente arábigo:

M: 1000 ;D: 500 ; C: 100 ; L: 50 ; X: 10 ; V: 5 ; I: 1 */
#include <iostream>
using namespace std;
int Romm_Arabic(char R[]){
int i, numero; int num = 0; int n = sizeof(R);
    for(i=0; i<n;i++){
        switch(R[i]){
               case 'I': numero= 1;break;
               case 'V': numero= 5;break;
               case 'X': numero= 10;break;
               case 'L': numero= 50;break;
               case 'C': numero= 100;break;
               case 'D': numero= 500;break;
               case 'M': numero= 1000;break;
               default: break;
                                }
        if(i+1 < n && R[i]< R[i+1]){
            numero = (R[i+1]- R[i]);
            i++;
        }
        else{
            numero += R[i];
            }


return num;
}

int main(){
char Romm[]="MC";
int arabic;
arabic = Romm_Arabic(Romm);
cout<<"El valor ingresado en forma arabica es: "<<arabic<<endl;
    return 0;
}


