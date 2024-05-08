#include "Red.h"
#include <iostream>

using namespace std;

int main() {
    string* lineas;
    string contenido;
    Red red("Medellin.txt",0,lineas,contenido);
    int opcion;
    do {cout << "\nMenú de opciones:\n";
        cout << "1. Crear nueva línea\n";
        cout << "2. Eliminar línea\n";
        cout << "3. Contar líneas\n";
        cout << "4. ¿Estacion pertenece?\n";
        cout << "5. Borrar Estacion\n";
        cout << "6. contar estaciones de linea\n";
        cout << "7. crear Estacion\n";
        cout << "8. Salir\n";
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
                cout << "Saliendo del programa.\n";
                break;
            default:
                cout << "Opción no válida. Intente de nuevo.\n";}}
    while (opcion != 8);
    delete[] lineas;
    return 0;}
