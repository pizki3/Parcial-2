#ifndef RED_H
#define RED_H

#include <string>

using namespace std;

class Red {
private:
    string Nombrearch;
    int Nlineas;
    string NombreL[100];

public:
    // Constructor
    Red(string Nombrearch, int Nlineas, string NombreL[100]);

    // Métodos
    void crear();
    void eliminar();
    void contarL();
    void pertenec();};

#endif // RED_H
