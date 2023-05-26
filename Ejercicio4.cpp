/** Ejercicio 4 Estructura de Decisión Simple y Múltiple
 Hacer un programa para ingresar por teclado dos números y luego informar por pantalla la  diferencia absoluta entre ambos.
  Ejemplo 1: Si se ingresan 3 y 8, se emite 5.   Si se ingresan 8 y 3, se emite 5.
  Ejemplo 2: Si se ingresan -3 y 9, se emite 12. Si se ingresan -12 y -1, se emite 11. */

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Ingrese PRIMER Numero: ";
    cin >> num1;
    cout << "Ingrese SEGUNDO Numero: ";
    cin >> num2;

    int diferencia = num1 - num2;
    if (diferencia < 0)
        diferencia = -diferencia;

    cout << "*****************************************************" << endl;
    cout << "LA DIFERENCIA ABSOLUTA ENTRE AMBOS NUMEROS ES: " << diferencia << endl;
    cout << "*****************************************************" << endl;

    return 0;
}
