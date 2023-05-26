/** Hacer un programa para ingresar por teclado tres números enteros y muestre un cartel aclarando:
"TODOS POSITIVOS" si todos los numeros son positivos
"ALGUNOS POSITIVOS" si alguno de los numeros es positivo
"NINGUNO POSITIVO" si ninguno de los numeros es positivo

TODOS CON OPERADORES LOGICOS
*/

#include <iostream>
using namespace std;

int main(){
    int primerNumero;
    int segundoNumero;
    int tercerNumero;

    cout << "Ingrese Primer Numero: ";
    cin >> primerNumero;

    cout << "Ingrese Segundo Numero: ";
    cin >> segundoNumero;

    cout << "Ingrese Tercer Numero: ";
    cin >> tercerNumero;

    if (primerNumero > 0 && segundoNumero > 0 && tercerNumero > 0){
        cout << "TODOS SON POSITIVOS " << endl;
    }
    else{
        if (primerNumero > 0 || segundoNumero > 0 || tercerNumero > 0){
            cout << "ALGUNO POSITIVO" << endl;
        }
        else{
            cout << "NINGUNO POSITIVO" << endl;
        }
    }

    return 0;
}
