#include "Red.h"
#include <iostream>

using namespace std;

int main() {
    int MAX_LINEAS = 5; 
    string* lineas;
    Red red("Medellin.txt",0,lineas);
    int opcion;
    do {cout << "\nMenú de opciones:\n";
        cout << "1. Crear nueva línea\n";
        cout << "2. Eliminar línea\n";
        cout << "3. Contar líneas\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                red.crear();
                break;
            case 2:
                red.eliminar();
                break;
            case 3:
                cout << "Número de líneas: " << red.contarL()<< endl;
                break;
            case 4:
                cout << "Saliendo del programa.\n";
                break;
            default:
                cout << "Opción no válida. Intente de nuevo.\n";}}
    while (opcion != 4);
    delete[] lineas;
    return 0;}
