#ifndef LINEA_H
#define LINEA_H
#include <string>
using namespace std;

class Linea{
private:
    int Nest;
    string NombreEs;
    string Estaciones[100];

public:
    Linea() : Nest(0), NombreEs(""), Estaciones{} {}
    Linea(int Nest,string NombreEs,string Estaciones[100]);
    void crear();
    void eliminar();
    void contarE();
    void pertenec(string nombreE);};

#endif
