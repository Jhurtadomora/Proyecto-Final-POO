#include "Zona.h"
#include "Explorador.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;


Zona::Zona(string nombre) {
    this -> nombre = nombre;
}


Zona::~Zona() {
    for (ElementoInteractivo* elemento : elementos) {
            delete elemento; }
}


string Zona::getNombre() {
    return nombre;
}


void Zona::agregarElemento(ElementoInteractivo* elemento) {
    elementos.push_back(elemento);
}


void Zona::mostrarElementos() {
    cout << "Zona: " << nombre << endl;
    for (int i = 0 ; i < elementos.size(); i++){
        cout << "==========================================" << endl;
        cout << " Posición: [ " << i << " ], Elemento: " << endl;
        elementos [i] -> mostrarInfo();
    }
}


void Zona::interactuar(int indice, Explorador* explorador) {
    if (indice >= 0 && indice < elementos.size())
        elementos[indice]->interactuar(explorador);

}


void Zona::interactuar(string nombre, Explorador* explorador) {
    bool elementoEncontrado = false;
    for (int i = 0; i < elementos.size(); i ++ ){
        if (elementos[i]-> getNombre() == nombre){
            elementos [i]->interactuar(explorador);
            elementoEncontrado = true;
        }
    }
    if (!elementoEncontrado)
            cout << "¡ERROR!: El elemento " << nombre << " no existe. ";
}
