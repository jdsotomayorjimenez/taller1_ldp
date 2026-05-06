#include <iostream>

using namespace std;

int main() {
    int suma_total = 0;

    for (int i = 0; i < 10; i++) {
        int valor;
        cout << "Ingrese el valor: ";
        cin >> valor;
        suma_total += valor;
    }

    double promedio = (double)suma_total / 10;

    cout << "Suma: " << suma_total << "\n";
    cout << "Promedio: " << promedio << "\n";

    return 0;
}