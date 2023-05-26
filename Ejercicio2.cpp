/** Ejercicio 2 Estructura de Decisión Simple y Múltiple
Hacer un programa para ingresar por teclado dos números y luego informar por pantalla
con un cartel aclaratorio si el primer número es múltiplo del segundo. */

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Ingrese PRIMER Numero: ";
    cin >> num1;
    cout << "Ingrese SEGUNDO Numero: ";
    cin >> num2;

    if (num1 % num2 == 0)
        cout << "**** El PRIMER NUMERO ES MULTIPLO DEL SEGUNDO ****" << endl;

    else
        cout << "==== El PRIMER NUMERO NO ES MULTIPLO DEL SEGUNDO ====" << endl;

    return 0;
}



