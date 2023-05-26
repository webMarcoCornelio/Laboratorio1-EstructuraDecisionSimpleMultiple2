/**
Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la siguiente escala:
$ 10 por kilovatio (kW) por el consumo hasta los primeros 100 kW de consumo.
$ 12 por kW por el consumo excedente de 101 a 200 kW.
$ 15 por kW por el consumo excedente de 201 kW en adelante.

Hacer un programa para que, dado el consumo en kilovatios de un determinado cliente, el programa calcule e informe el total a pagar por el mismo.
Ejemplo 1: Un consumo de 55 kW, se calculará: $ 10 x 55= $ 550
Ejemplo 2: Un consumo de 125 kW, se calculará: $ 10 x 100 + $ 12 x 25 = $1300.
Ejemplo 3: Un consumo de 250 kW, se calculará: $ 10 x 100 + $ 12 x 100 + $ 15 x 50 = $ 2950.
*/

#include <iostream>
using namespace std;

int main(){
    int KW_hora;
    int descuento;
    int ventaDescuento;

    cout << "Ingresar el Consumo de Kw por mes del Cliente: ";
    cin >> KW_hora;


    if (KW_hora >= 201){
        cout << "El Cliente tiene que pagar su Consumo por KW " << endl;
        KW-hora = hasta100
        KW_hora = 10 * 100 + 12 * 100 + 15 * 50;
        cout << "Su precio por consumo de KW del Mes es: " << KW_hora << endl;
//        ventaDescuento = importeVenta - descuento;
 //       cout << "Su precio con descuento es: " << ventaDescuento << endl;
/*
    }
    else{
        if (importeVenta > 99){
            cout << "Tiene un Descuento del 10%" << endl;
            descuento = importeVenta * 10 / 100;
            ventaDescuento = importeVenta - descuento;
            cout << "Su precio con descuento es: " << ventaDescuento << endl;

        }
        else{
            cout << "Tiene un Descuento del 5%" << endl;
            descuento = importeVenta * 5 / 100;
            ventaDescuento = importeVenta - descuento;
            cout << "Su precio con descuento es: " << ventaDescuento << endl;

        }
        */
    }


    return 0;
}





