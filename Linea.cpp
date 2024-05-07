#include "Linea.h"
#include <iostream>
#include <string>

using namespace std;

Linea::Linea(int _Nest, string _NombreEs,string _Estaciones[100]) {
    Nest = _Nest;
    NombreEs = _NombreEs;
    for (int i = 0; i < 100; ++i) {
        Estaciones[i] = _Estaciones[i];}
    for (char c : NombreEs) {
        if (c != ',' && c !='.' && c!='\n'){
            Estaciones[Nest] = c;
            Nest++;}}}


void Linea::crear() {
    
}

void Linea::eliminar() {
}

int Linea::contarE() {
    
    return Nest;}
