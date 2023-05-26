/** Hacer un programa para ingresar por teclado tres números enteros y muestre un cartel aclarando:
cual es el MAYOR DE LOS TRES NUMEROS
TODOS CON OPERADORES LOGICOS
*/

#include <iostream>
using namespace std;

int main(){
    int Num1;
    int Num2;
    int Num3;
    int Maximo;

    cout << "Ingrese Primer Numero: ";
    cin >> Num1;

    cout << "Ingrese Segundo Numero: ";
    cin >> Num2;

    cout << "Ingrese Tercer Numero: ";
    cin >> Num3;

    if (Num1 > Num2) {
        Maximo = Num1;
        }
        else {
            Maximo = Num2;
            }
    if (Num3 > Maximo) {
        Maximo = Num3;
        }

        cout << "EL MAYOR NUMERO ES: " << Maximo  << endl;

    return 0;
}
