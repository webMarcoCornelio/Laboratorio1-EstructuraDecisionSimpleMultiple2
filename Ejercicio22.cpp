#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double importe;
    cout << "Ingresa el importe de la venta: ";
    cin >> importe;

    double descuento;
    if (importe < 100) {
        descuento = 0.05;
    } else if (importe <= 500) {
        descuento = 0.1;
    } else {
        descuento = 0.15;
    }

    double importeConDescuento = importe * (1 - descuento);
    cout << fixed << setprecision(2);
    cout << "Importe con descuento aplicado: $" << importeConDescuento << endl;

    return 0;
}
