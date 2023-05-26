/** Ejercicio 7 Estructura de Decisi�n Simple y M�ltiple
Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la longitud
de los tres lados de un tri�ngulo y luego listar que tipo de tri�ngulo es:
- Equil�tero: si los tres lados son iguales.
- Is�sceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre s�. */


#include <iostream>
using namespace std;

int main()
{
    int lado1, lado2, lado3;
    cout << "Ingrese la longitud de los tres lados del TRIANGULO: " << endl << endl;
    cout << "Ingrese LADO 1: ";
    cin >> lado1;
    cout << "Ingrese LADO 2: ";
    cin >> lado2;
    cout << "Ingrese LADO 3: ";
    cin >> lado3;


    if (lado1 == lado2 && lado2 == lado3)
        cout << "EL TRIANGULO ES EQUILATERO" << endl;
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
        cout << "EL TRIANGULO ES ISOSCELES" << endl;
    else
        cout << "EL TRIANGULO ES ESCALENO" << endl;

    return 0;
}
