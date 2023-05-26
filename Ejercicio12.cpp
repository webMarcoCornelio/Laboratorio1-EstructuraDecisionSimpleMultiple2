/** Ejercicio 12 Estructura de Decisión Simple y Múltiple
Hacer un programa para leer tres números diferentes y determinar e informar el número del medio.
 Ejemplo: si se ingresan 6, 10, 8, se emitirá 8.  */

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
