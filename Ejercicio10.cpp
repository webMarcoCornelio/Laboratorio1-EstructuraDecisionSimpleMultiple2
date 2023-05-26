/** Ejercicio 10 Estructura de Decisión Simple y Múltiple
Hacer un programa para ingresar cinco números y listar el máximo de ellos.*/

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4, num5;
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


    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
        cout << "EL NUMERO MAXIMO ES: " << num1 << endl;
    else if (num2 > num3 && num2 > num4 && num2 > num5)
        cout << "EL NUMERO MAXIMO ES: " << num2 << endl;
    else if (num3 > num4 && num3 > num5)
        cout << "EL NUMERO MAXIMO ES: " << num3 << endl;
    else if (num4 > num5)
        cout << "EL NUMERO MAXIMO ES: " << num4 << endl;
    else
        cout << "EL NUMERO MAXIMO ES: " << num5 << endl;

    return 0;
}

