/** Ejercicio 7 Estructura de Decisión Simple y Múltiple
Hacer un programa para ingresar por teclado tres números e informar con una leyenda aclaratoria
 si los tres son todos distintos entre sí, caso contrario no emitir nada.
  Ayuda: Si A es distinto de B y B es distinto de C, eso no signica que A y C sean distintos.
   Ejemplo: A=8, B=6 y C=8.  */


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


    if (num1 != num2 && num2 != num3 && num1 != num3)
        cout << " =/=/=/= LOS TRES NUMEROS SON DISTINTOS =/=/=/=" << endl;

    return 0;
}
