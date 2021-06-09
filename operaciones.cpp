/*
Desarrolle un programa que muestre un menú de las operaciones suma, resta, multiplicacion
division entera y modulo, permita elegir una opcion y realice la operacion con 2 datos enteros 
dados como entrada. La forma de elegir la opcion será mediante la introducción de un carácter 
de acuerdo a lo siguiente:

Opción     /     Operación
   +                Suma
   -                Resta
   *                Multiplicacion
   /                Division entera (asegurarse que con cualquier dividendo y divisor el 
                    resultado siempre sea entero, por ejemplo 3546/7 = 506 )
   %                Modulo

Recuerde que si el usuaroi introduce una opcion incorrecta debera mostrar un mensaje indicando
esta cuestión.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    char opcion='a';
    int numero1, numero2, suma=0, resta=0, multiplicacion=0, division=0, modulo=0;
    cout << " Ingrese el primer numero ";
    cin >> numero1;
    cout << " Ingrese el segundo numero ";
    cin >> numero2;
    while (opcion!='s')
    {
        cout << "\n" << endl;
        cout << "____________________________" << endl;
        cout << "|        + Suma            |" << endl;
        cout << "|        - Resta           |" << endl;
        cout << "|        * Multiplicación |" << endl;
        cout << "|        / División       |" << endl;
        cout << "|        % Módulo         |" << endl;
        cout << "|     s Salir              |" << endl;
        cout << "|__________________________|" << endl;
        cout << "\n" << endl;
        cout << "  Elija la operacion deceada" << endl;
        cin >> opcion;
        switch(opcion){
            case '+':
            system("cls");
            suma = numero1 + numero2;
            cout << "La suma de: " <<numero1 << " + "<< numero2 << " es igual a: "<< suma << endl;
            system("pause");
            break;
            case '-':
            system("cls");
            resta = numero1 - numero2;
            cout << "La resta de: " <<numero1 << " - "<< numero2 << " es igual a: "<< resta << endl;
            system("pause");
            break;
            case '*':
            system("cls");
            multiplicacion = numero1 * numero2;
            cout << "La Multiplicacion de: " <<numero1 << " * "<< numero2 << " es igual a: "<< multiplicacion << endl;
            system("pause");
            break;
            case '/':
            system("cls");
            division = numero1 / numero2;
            cout << "La Division de: " <<numero1 << " / "<< numero2 << " es igual a: "<< division << endl;
            system("pause");
            break;
            case '%':
            system("cls");
            modulo = numero1 % numero2;
            cout << "El Modulo de: " <<numero1 << " % "<< numero2 << " es igual a: "<< modulo << endl;
            system("pause");
            break;
            case 's':
            system("cls");
            cout << "Gracias " << endl;
            break;
            default:
            system("cls");
            cout << "Opcion Incorrecta " << endl;
            system("pause");
            break;
        }
        
        
    }
    
    system("pause");
    return 0;
}