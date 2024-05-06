#ifndef RED_H
#define RED_H

#include <iostream>
#include <string>

using namespace std;

class Red {
private:
    string Nombrearch;
    string* NombreL;
    int Nlineas;

public:
    Red(string Nombrearch,int Nlineas,string* NombreL);
    void crear();
    void eliminar();
    int contarL();};

#endif
