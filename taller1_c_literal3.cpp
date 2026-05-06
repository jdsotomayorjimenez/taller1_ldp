#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));

    string sucursales[25];
    int ventas[25];

    for (int i = 0; i < 25; i++) {
        sucursales[i] = "Sucursal " + to_string(i + 1);
        ventas[i] = rand() % 9001 + 1000; // rango [1000, 10000]
    }

    int suma = 0;
    for (int i = 0; i < 25; i++)
        suma += ventas[i];

    double promedio = (double)suma / 25;
    cout << "El promedio de ventas es: " << promedio << "\n";

    cout << "Sucursales con ventas mayores al promedio:\n";
    for (int i = 0; i < 25; i++)
        if (ventas[i] > promedio)
            cout << sucursales[i] << ": " << ventas[i] << "\n";

    return 0;
}