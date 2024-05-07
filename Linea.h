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
    // Constructor
    Linea(int Nest,string NombreEs,string Estaciones[100]);
    void crear();
    void eliminar();
    int contarE();};

#endif
