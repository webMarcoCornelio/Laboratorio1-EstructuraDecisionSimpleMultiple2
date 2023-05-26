/** GUIA 2 EJERCICIO 15
Hacer un programa para ingresar por teclado las cuatro notas de los exámenes
obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes
 condiciones:
- “Promociona”, si obtuvo en los cuatro exámenes nota 7 o más.
- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes.
- “Recursa la materia”, si no aprobó ningún examen parcial.

*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
    int n1;
    int n2;
    int n3;
    int n4;
    int promedio;
    int mayora4=0;

    while(1){
    cout<<"nota 1: ";
    cin>>n1;
    if(n1>4){
        mayora4++;
    }
    cout<<"nota 2: ";
    cin>>n2;
    if(n2>4){
        mayora4++;
    }
    cout<<"nota 3: ";
    cin>>n3;
    if(n3>4){
        mayora4++;
    }
    cout<<"nota 4: ";
    cin>>n4;
    if(n4>4){
        mayora4++;
    }

    ///promedio=(n1+n2+n3+n4)/4;


    if(n1>=7&&n2>=7&&n3>=7&&n4>=7){
            cout<<"PROMOCIONA"<<endl;

    }
    else if(mayora4>=3){
            cout<<"rinde FINAL"<<endl;
        }
        else if(mayora4>=1){
                cout<<"RECUPERA PARCIALES"<<endl;
            }
        else{
            cout<<"RECURSA"<<endl;
        }
    }

    return 0;
}
