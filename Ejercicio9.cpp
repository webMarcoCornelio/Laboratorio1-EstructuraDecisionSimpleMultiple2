/** Ejercicio 9 Estructura de Decisi�n Simple y M�ltiple
  Hacer un programa para ingresar tres n�meros y listar el m�ximo de ellos  */

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "***INGRESE TRES NUMEROS***" << endl << endl;
    cout << "Ingrese PRIMER Numero: ";
    cin >> num1;
    cout << "Ingrese SEGUNDO Numero: ";
    cin >> num2;
    cout << "Ingrese TERCER Numero: ";
    cin >> num3;

    if (num1 > num2 && num1 > num3)
        cout << "EL NUMERO MAXIMO ES: " << num1 << endl;
    else if (num2 > num1 && num2 > num3)
        cout << "EL NUMERO MAXIMO ES: " << num2 << endl;
    else
        cout << "EL NUMERO MAXIMO ES: " << num3 << endl;

    return 0;
}
