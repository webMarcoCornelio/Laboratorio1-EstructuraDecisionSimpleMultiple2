/** Ejercicio 2 Estructura de Decisi�n Simple y M�ltiple
Hacer un programa para ingresar por teclado dos n�meros y luego informar por pantalla
con un cartel aclaratorio si el primer n�mero es m�ltiplo del segundo. */

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



