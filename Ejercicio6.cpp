/** Ejercicio 6 Estructura de Decisión Simple y Múltiple
Hacer un programa para ingresar por teclado tres números y luego determinar e informar
con una leyenda aclaratoria si los tres son iguales entre sí, caso contrario no emitir nada.
 Ayuda: Si A es igual a B y B es igual a C, entonces A y C son iguales. */

#include <iostream>
using namespace std;

int main()
{
    cout << "***INGRESE TRES NUMEROS***" << endl << endl;
    int num1, num2, num3;
    cout << "Ingrese PRIMER Numero: ";
    cin >> num1;
    cout << "Ingrese SEGUNDO Numero: ";
    cin >> num2;
    cout << "Ingrese TERCER Numero: ";
    cin >> num3;


    if (num1 == num2 && num2 == num3)
        cout << " =/=/=/= LOS TRES NUMEROS SON IGUALES =/=/=/=" << endl;

    return 0;
}
