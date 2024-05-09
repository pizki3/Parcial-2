#include "Red.h"
#include <iostream>

using namespace std;

int main() {
    string* lineas;
    string contenido;
    int opcion;
    Red red("Medellin.txt", 0, lineas, contenido);
    do {
        Red red("Medellin.txt", 0, lineas, contenido);
        cout << "\nMenú de opciones:\n";
        cout << "1. Crear nueva línea\n";
        cout << "2. Eliminar línea\n";
        cout << "3. Contar líneas\n";
        cout << "4. ¿Estacion pertenece?\n";
        cout << "5. Borrar Estacion\n";
        cout << "6. contar estaciones de linea\n";
        cout << "7. crear Estacion\n";
        cout << "8. Contar Estaciones de Red\n";
        cout << "9. Salir\n";
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
                red.contarL();
                break;
            case 4:
                red.pertenece();
                break;
            case 5:
                red.EliminarE();
                break;
            case 6:
                red.contarLE();
                break;
            case 7:
                red.CrearE();
                break;
            case 8:
                red.contarE();
                break;
            case 9:
                cout << "Saliendo del programa.\n";
                break;
            default:
                cout << "Opción no válida. Intente de nuevo.\n";
        }
    } while (opcion != 9);

    delete[] lineas;
    return 0;
}
