#include "Red.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

Red::Red(string _Nombrearch,int _Nlineas,string _NombreL[100]){
    Nombrearch=_Nombrearch;
    Nlineas=_Nlineas;
    for (int i = 0; i < Nlineas; ++i) {
        NombreL[i] = _NombreL[i];}
    ifstream archivo(Nombrearch);
    string contenido;
    if (archivo.is_open()) {
        string linea;
        while (getline(archivo, linea)) {
            contenido += linea + '\n';}
        archivo.close();}
    else {
        cout << "No se pudo abrir el archivo " << Nombrearch << endl;}
    Nlineas=0;
    for (char c : contenido) {
        if (c != ',' && c !='.' && c!='\n'){
            NombreL[Nlineas] = c;
            cout<<NombreL[Nlineas]<<endl;
            Nlineas++;
            cout<<Nlineas<<endl;}
        else if(c =='\n'){
            break;}
        else{}}
    
}

void Red::crear() {
    string Nombre;
    cout << "Ingrese nombre de línea a agregar: " << endl;
    cin >>Nombre;
    if (Nombre.size()!=1){
        cout<<"El Nombre solo puede tener una Letra o Numero"<<endl;
        return;}
    for (int i = 0; i < Nlineas; ++i) {
        if (NombreL[i] == Nombre) {
            cout<<"Esta linea ya existe"<<endl;
            return;}}
    NombreL[Nlineas]=Nombre;
    ++Nlineas;}

void Red::eliminar() {
    if (Nlineas == 1) {
        NombreL[0] = "";
        cout << "Única línea eliminada" << endl;
        Nlineas=0;}
    else {
        cout << "Todas las líneas tienen estación de transferencia" << endl;}}

int Red::contarL() {
    return Nlineas;}
