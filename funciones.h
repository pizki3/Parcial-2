#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void actualizarLinea(int numeroLinea, string& nuevaLinea) {
    ifstream archivoEntrada("Medellin.txt");
    ofstream archivoTemp("temp.txt");
    string linea;
    int numeroLineaActual = 0;

    while (getline(archivoEntrada, linea)) {
        numeroLineaActual++;
        if (numeroLineaActual == numeroLinea) {
            archivoTemp << nuevaLinea << endl;}
        else {
            archivoTemp << linea << endl;}}

    archivoEntrada.close();
    archivoTemp.close();
    remove("Medellin.txt");
    rename("temp.txt", "Medellin.txt");}

#endif
