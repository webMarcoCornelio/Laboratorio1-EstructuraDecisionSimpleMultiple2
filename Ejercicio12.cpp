/** Ejercicio 12 Estructura de Decisi�n Simple y M�ltiple
Hacer un programa para leer tres n�meros diferentes y determinar e informar el n�mero del medio.
 Ejemplo: si se ingresan 6, 10, 8, se emitir� 8.  */

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "***INGRESE TRES NUMEROS DIFERENTES***" << endl << endl;
    cout << "Ingrese PRIMER Numero: ";
    cin >> num1;
    cout << "Ingrese SEGUNDO Numero: ";
    cin >> num2;
    cout << "Ingrese TERCER Numero: ";
    cin >> num3;

    if (num1 > num2 && num1 < num3 || num1 < num2 && num1 > num3)
        cout << "EL NUMERO DEL MEDIO ES: " << num1 << endl;
    else if (num2 > num1 && num2 < num3 || num2 < num1 && num2 > num3)
        cout << "EL NUMERO DEL MEDIO ES: " << num2 << endl;
    else
        cout << "EL NUMERO DEL MEDIO ES: " << num3 << endl;

    return 0;
}
