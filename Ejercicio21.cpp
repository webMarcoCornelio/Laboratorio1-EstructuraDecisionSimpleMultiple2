/**
5.	Hacer un programa para que el usuario ingrese dos n�meros y luego el programa muestre por pantalla
 los n�meros entre el menor y el mayor de ambos.
  Ejemplo, si el usuario ingresa 3 y 15,  se mostrar�n los n�meros entre el 3 y el 15;
   y si el usuario ingresa 25 y 8, se mostrar�n los    n�meros entre el 8 y el 25
*/

#include <iostream>
using namespace std;
int main (){
    int num1;
    int num2;

    cout << "Ingresar primer numero: ";
    cin >> num1;
    cout << "Ingresar segundo numero: ";
    cin >> num2;

    if(num1 < num2){
            for (int i = num1; i <= num2; i++) {
                cout << i << endl;
            }

    }
    else for (int i = num2; i <= num1; i++) {
                cout << i << endl;
            }

    return 0;
}
