#ifndef RED_H
#define RED_H

#include <string>

using namespace std;

class Red {
private:
    string Nombrearch;
    int Nlineas;
    string NombreL[100];
    string contenido;

public:
    // Constructor
    Red(string Nombrearch, int Nlineas, string NombreL[100],string contenido);

    // Métodos
    void crear();
    void eliminar();
    void contarL();
    void EliminarE();
    void CrearE();
    void contarLE();
    void pertenece();
    void contarE();};

#endif // RED_H
