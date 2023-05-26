/** Ejercicio 3 Estructura de Decisión Simple y Múltiple
Hacer un programa para ingresar por teclado un número y luego informar
 por pantalla con un cartel aclaratorio si el mismo es par o impar. */

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "INGRESE UN NUMERO: ";
    cin >> num;

    if (num % 2 == 0)
        cout << "   **** El NUMERO ES PAR ****" << endl;
    else
        cout << "   *** EL NUMERO ES IMPAR ***" << endl;

    return 0;
}

