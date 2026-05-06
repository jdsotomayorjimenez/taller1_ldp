#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));

    int total_pares = 0;
    int total_impares = 0;

    for (int i = 0; i < 500; i++) {
        int valor = rand() % 51 + 50;
        if (valor % 2 != 0)
            total_impares++;
        else
            total_pares++;
    }

    cout << "El total de numeros pares es: " << total_pares << "\n";
    cout << "El total de numeros impares es: " << total_impares << "\n";

    return 0;
}