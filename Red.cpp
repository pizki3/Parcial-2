#include "Red.h"
#include "Linea.h"
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

Red::Red(string _Nombrearch,int _Nlineas,string _NombreL[100],string _contenido){
    Nombrearch=_Nombrearch;
    Nlineas=_Nlineas;
    contenido=_contenido;
    for (int i = 0; i < Nlineas; ++i) {
        NombreL[i] = _NombreL[i];}
    ifstream archivo(Nombrearch);
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
            Nlineas++;}
        else if(c =='\n'){
            break;}
        else{}}}
        
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

void Red::contarL() {
    cout<<"La Red tiene: "<< Nlineas<<" Lineas"<<endl;}
    
void Red::contarLE(){
    string Estaciones[100];
    string linea;
    Linea arreglo[Nlineas+1];
    stringstream ss(contenido);
    int contador=0;
    while (getline(ss, linea)) {
        if (contador != 0 && contador <= Nlineas) {
            arreglo[contador] = Linea(0, linea, Estaciones);}
        contador++;}
    cout<<"En que linea desea contar las Estaciones:"<<endl;
    for (int i=0; i<Nlineas;i++){
        cout<<i+1<<": "<<NombreL[i]<<endl;}
    int opcion;
    cin>>opcion;
    cout<<"Esta linea tiene:"<<arreglo[opcion].contarE()<<" estaciones"<<endl;}
    
void Red::CrearE(){
    string Estaciones[100];
    string linea;
    Linea arreglo[Nlineas+1];
    stringstream ss(contenido);
    int contador=0;
    while (getline(ss, linea)) {
        if (contador != 0 && contador <= Nlineas) {
            arreglo[contador] = Linea(0, linea, Estaciones);}
        contador++;}
    cout<<"En que linea desea crear la estacion:"<<endl;
    for (int i=0; i<Nlineas;i++){
        cout<<i+1<<": "<<NombreL[i]<<endl;}
    int opcion;
    cin>>opcion;
    arreglo[opcion].crear(opcion+1);}
    
void Red::EliminarE(){
    string Estaciones[100];
    string linea;
    Linea arreglo[Nlineas+1];
    stringstream ss(contenido);
    int contador=0;
    while (getline(ss, linea)) {
        if (contador != 0 && contador <= Nlineas) {
            arreglo[contador] = Linea(0, linea, Estaciones);}
        contador++;}
    cout<<"En que linea desea eliminar:"<<endl;
    for (int i=0; i<Nlineas;i++){
        cout<<i+1<<": "<<NombreL[i]<<endl;}
    int opcion;
    cin>>opcion;
    arreglo[opcion].eliminar(opcion+1);}
    
void Red::pertenece() {
    string Estaciones[100];
    string linea;
    Linea arreglo[Nlineas+1];
    stringstream ss(contenido);
    int contador=0;
    while (getline(ss, linea)) {
        if (contador != 0 && contador <= Nlineas) {
            arreglo[contador] = Linea(0, linea, Estaciones);}
        contador++;}
    string nombre;
    cout<<"ingrese nombre de estacion:"<<endl;
    cin.ignore();
    getline(cin, nombre);
    cout<<"En que linea desea revisar;"<<endl;
    for (int i=0; i<Nlineas;i++){
        cout<<i+1<<": "<<NombreL[i]<<endl;}
    int opcion;
    cin>>opcion;
    arreglo[opcion].pertenec(nombre);}
    
void Red::contarE(){
    string Estaciones[100];
    string linea;
    Linea arreglo[Nlineas+1];
    stringstream ss(contenido);
    int contador=0;
    while (getline(ss, linea)) {
        if (contador != 0 && contador <= Nlineas) {
            arreglo[contador] = Linea(0, linea, Estaciones);}
        contador++;}
    contador=0;
    for (int i=0;i<=Nlineas;i++){
        contador=contador+arreglo[i].contarE();}
    contador=contador-(Nlineas-1);
    cout<<"La red metro tiene: "<<contador;<<"estaciones"<<endl;}
