/** Hacer un programa para ingresar por teclado un número y luego emitir por pantalla
    un cartel aclaratorio indicando si el mismo es positivo, negativo o cero. */


#include <iostream>
using namespace std;

int main(){
    int nro;
    int resto;
    cout << "Ingresar Numero: ";
    cin >> nro;

    if (nro > 0){
        cout << "Es positivo" << endl;
    }
    else{
        if (nro == 0){
            cout << "Es cero" << endl;
        }
        else{
            cout << "Es negativo" << endl;
        }
    }

    return 0;
}
