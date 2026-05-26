#include "ElementoInteractivo.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;


ElementoInteractivo::ElementoInteractivo(string nombre, string descripcion) {
    this->nombre = nombre;
    this->descripcion = descripcion;
}


ElementoInteractivo::~ElementoInteractivo() {
}


string ElementoInteractivo::getNombre() {
    return nombre;
}


string ElementoInteractivo::getDescripcion() {
    return descripcion;
}


void ElementoInteractivo::mostrarInfo() {
    cout << "Nombre del elemento: "<< nombre << endl;
    cout << "Descripcion: " << descripcion << endl;
}

