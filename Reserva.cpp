#include "Reserva.h"
#include <iostream>

using std::cout;
using std::string;
using std::endl;


Reserva::Reserva(string nombre) {

    this->nombre = nombre;
}



Reserva::~Reserva() {
    for (auto& par : zonas) {
            delete par.second;
    }

}


string Reserva::getNombre() {
    return nombre;
}


void Reserva::agregarZona(string codigo, Zona* zona) {
    zonas[codigo] = zona;
}


Zona* Reserva::buscarZona(string codigo) {

    auto resultado = zonas.find(codigo);

    if (resultado != zonas.end()) {

        return resultado->second;
    } else {
        return nullptr;
    }
}


void Reserva::mostrarZonas() {
    cout << "Reserva: " << nombre << "\n";
    for (auto& par : zonas){
        cout << "==========================================" << endl;
        cout << "Zona: " << endl;
        cout << "Código: [ " << par.first << " ] " << endl;
        cout << "Nombre: " <<  par.second -> getNombre ()<< endl;

    }

}
