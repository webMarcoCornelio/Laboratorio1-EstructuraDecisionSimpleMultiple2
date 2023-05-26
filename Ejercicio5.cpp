/** Ejercicio 5 Estructura de Decisión Simple y Múltiple
Un negocio de perfumería efectúa descuentos según el importe de la venta.
 - Si el importe es menor a $100 aplicar un descuento del 5%
 - Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
 - Si el importe es mayor a $500 aplicar un descuento del 15%
  Hacer un programa donde se ingresa el importe original sin descuento y que
  se informe por pantalla el importe con el descuento ya aplicado. */

#include <iostream>
using namespace std;

int main(){
    int importeVenta;
    int descuento;
    int ventaDescuento;

    cout << "***PERFUMERIA LOS MULTIPLES OLORES***" << endl << endl;

    cout << "Ingresar Importe de la Venta: ";
    cin >> importeVenta;


    if (importeVenta > 500){
        cout << "Tiene un Descuento del 15%" << endl;
        descuento = importeVenta * 15 / 100;
        ventaDescuento = importeVenta - descuento;
        cout << "Su Precio Final con Descuento es: " << ventaDescuento << endl;

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
    }

    return 0;
}
