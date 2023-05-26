/** Ejercicio 11 Estructura de Decisión Simple y Múltiple
Hacer un programa para ingresar cinco números y listar cuántos de esos cinco números son positivos. */

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4, num5;
    int count = 0;
    cout << "***INGRESE CINCO NUMEROS***" << endl << endl;
    cout << "Ingrese PRIMER Numero: ";
    cin >> num1;
    cout << "Ingrese SEGUNDO Numero: ";
    cin >> num2;
    cout << "Ingrese TERCER Numero: ";
    cin >> num3;
    cout << "Ingrese CUARTO Numero: ";
    cin >> num4;
    cout << "Ingrese QUINTO Numero: ";
    cin >> num5;

    if (num1 > 0)
        count++;
    if (num2 > 0)
        count++;
    if (num3 > 0)
        count++;
    if (num4 > 0)
        count++;
    if (num5 > 0)
        count++;

    cout << "Hay " << count << " Numeros Positivos." << endl;

    return 0;
}

