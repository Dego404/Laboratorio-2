/*Elabore un programa que llene una matriz 5x5 con los números del 1 al 25 y la imprima, luego
imprima la matriz rotada 90, 180 y 270 grados.*/
#include<iostream>
#include<conio.h>

int main()
{
    int matriz[5][5];
     for(int i= 0;i<5;i++){
         for(int j=0; j<3;j++){
             cout<<"Digite un numero ["<<i<<"]["<<j<<"] ";
             cin >>matriz[i][j]<<" ";
         }
     }
     cout<<"Matriz Original"<<endl;
     for(int i= 0;i<5;i++){
         for(int j=0; j<3;j++){
             cin >>matriz[i][j];
         }
         cout<<"\n";
     }
    cout<<"Matriz Rotada\n"
          for(int i= 0;i<5;i++){
              for(int j=0; j<3;j++){
                  cout<<matriz[j][i]<<" ";
              }
              cout<<"\n";
          }


    return 0;
}
