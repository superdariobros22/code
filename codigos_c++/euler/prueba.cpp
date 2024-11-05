#include <iostream>
#include <vector>

int main() {
    const int limite = 2000000;
    std::vector<bool> esPrimo(limite, true);
    esPrimo[0] = esPrimo[1] = false;  // 0 y 1 no son primos

    // Criba de Eratóstenes
    for (int i = 2; i * i < limite; ++i) {
        if (esPrimo[i]) {
            for (int j = i * i; j < limite; j += i) {
                esPrimo[j] = false;
            }
        }
    }

    // Sumar todos los números primos
    long long suma = 0;
    for (int i = 2; i < limite; ++i) {
        if (esPrimo[i]) {
            suma += i;
        }
    }

    std::cout << "La suma de todos los primos por debajo de " << limite << " es: " << suma << std::endl;
    return 0;
}