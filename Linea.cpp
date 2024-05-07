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
    int opcion;
    cout <<"Despues de que estacion quiere crear la estacion:"<<endl;
    cout<<"0: Primera estacion"<<endl;
    for (int i=0; i<Nest;i++){
        cout <<i+1<<": "<< Estaciones[i]<<endl;}
    cin >> opcion;
    for (int i = Nest; i>opcion; --i) {
        Estaciones[i]=Estaciones[i - 1];}
    cout<<"Ingrese nombre de la Estacion"<<endl;
    string nombre;
    cin>>nombre;
    for (int i = 0; i <=Nest; ++i) {
        if (Estaciones[i] == nombre) {
            cout<<"Esta estacion ya existe"<<endl;
            return;}}
    Estaciones[opcion] =nombre;}


void Linea::eliminar() {
    cout <<"Que estacion desea eliminar:"<<endl;
    for (int i=0; i<Nest;i++){
        cout <<i+1<<": "<< Estaciones[i]<<endl;}
    int opcion;
    cin >> opcion;
    opcion=opcion-1;
    for (char c : Estaciones[opcion]) {
        if (c=='_'){
            cout <<"Esta estacion es de transferencia no es posible eliminar"<<endl;
            return;}}
    for (int i = opcion; i<Nest- 1; ++i) {
            Estaciones[i] = Estaciones[i + 1];}
    Nest--;}

void Linea::contarE() {
    cout<<"Esta linea tiene:"<<Nest<<" estaciones"<<endl;}
