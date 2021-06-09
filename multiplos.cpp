/*
Imprimir los Multiplos de 3 entre el 1 y el 3000 usando la estructura repetir hasta (Do While)
*.- Los numeros deberán ser generados automaticamente mediante el ciclo Do While
*.- Los numeros deberán imprimirse en pantalla en orden ascendente, un numero por linea 
*/

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int n=1;
    cout << "Salida: " <<endl;
    do {
        if (n%3==0){
            cout << n << endl;
        }
        n++;
    } while (n<=3000);    
    system("pause");
    return 0;
}