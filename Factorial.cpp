#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);  
}

double saldo = 20000.0;

void consultarSaldo() {
    cout << "Su saldo actual es: $" << saldo << endl;
}

// Función para retirar efectivo
void retirarEfectivo() {
    double monto;
    cout << "Ingrese el monto a retirar: $";
    cin >> monto;

    if (monto > saldo) {
        cout << "Fondos insuficientes." << endl;
    } else {
        saldo -= monto;
        cout << "Retiro exitoso. Su nuevo saldo es: $" << saldo << endl;
    }
}

// Función del menú del cajero automático
void cajeroAutomatico() {
    int opcion;

    do {
        cout << "\n--- Cajero Automatico ---" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Retirar efectivo" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                consultarSaldo();
                break;
            case 2:
                retirarEfectivo();
                break;
            case 3:
                cout << "Gracias por usar el cajero automatico." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
        }
    } while (opcion != 3);
}

int main() {
    int opcion;

    do {
        cout << "\n--- Menu Principal ---" << endl;
        cout << "1. Calcular Factorial" << endl;
        cout << "2. Usar Cajero Automatico" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int numero;
                cout << "Ingrese un numero para calcular su factorial: ";
                cin >> numero;
                if (numero < 0) {
                    cout << "El factorial no está definido para numeros negativos." << endl;
                } else {
                    cout << "El factorial de " << numero << " es: " << factorial(numero) << endl;
                }
                break;
            }
            case 2:
                cajeroAutomatico();
                break;
            case 3:
                cout << "Saliendo del programa. Hasta pronto." << endl;
                break;
            default:
                cout << "Opcion invalida. Intente nuevamente." << endl;
        }
    } while (opcion != 3);

    return 0;
}
