#include "Linea.h"
#include "funciones.h"
#include <iostream>
#include <string>

using namespace std;

Linea::Linea(int _Nest, string _NombreEs,string _Estaciones[100]) {
    Nest = _Nest;
    NombreEs = _NombreEs;
    for (int i = 0; i < 100; ++i) {
        Estaciones[i] = _Estaciones[i];}
    for (char c : NombreEs) {
        if (c != ',' && c != '.' && c != '\n') {
            Estaciones[Nest] += c;}
        else if (c == ',' || c == '.') {
            Nest++;
        }}}


void Linea::crear(int Linea) {
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
    cin.ignore();
    getline(cin,nombre);
    for (int i = 0; i <=Nest; ++i) {
        if (Estaciones[i]==nombre) {
            cout<<"Esta estacion ya existe"<<endl;
            return;}}
    Estaciones[opcion] =nombre;
    Nest++;
    string contenido;
    for (int i=0; i<Nest;++i){
        if (i!=Nest-1){
            contenido=contenido+Estaciones[i]+",";}
        else {contenido=contenido+Estaciones[i]+".";}}
    actualizarLinea(Linea,contenido);
    cout << "estacion creada" <<endl;}


void Linea::eliminar(int Linea){
    cout <<"Que estacion desea eliminar:"<<endl;
    for (int i=0; i<Nest;i++){
        cout <<i+1<<": "<< Estaciones[i]<<endl;}
    int opcion;
    cin >> opcion;
    opcion=opcion-1;
    string contenido;
    for (char c : Estaciones[opcion]) {
        if (c=='-'){
            cout <<"Esta estacion es de transferencia no es posible eliminar"<<endl;
            return;}}
    for (int i = opcion; i<Nest- 1; ++i) {
            Estaciones[i] = Estaciones[i + 1];}
    Nest--;
    for (int i=0; i<Nest;++i){
        if (i!=Nest-1){
            contenido=contenido+Estaciones[i]+",";}
        else {contenido=contenido+Estaciones[i]+".";}}
    actualizarLinea(Linea,contenido);
    cout<<"Estacion Eliminada"<<endl;}

int Linea::contarE() {
    return Nest;}
    
void Linea::pertenec(string nombreE){
    for (int i = 0; i <=Nest; ++i) {
        if (Estaciones[i] == nombreE) {
            cout<<"Esta Estacion si pertenece a esta Linea"<<endl;
            return;}}
    cout<<"Esta Estacion No pertenece a esta Linea"<<endl;
            return;}
