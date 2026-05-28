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

// Agrega una zona al mapa con su código como clave
void Reserva::agregarZona(string codigo, Zona* zona) {
    zonas[codigo] = zona;
}

// Busca una zona por su código y la retorna
Zona* Reserva::buscarZona(string codigo) {
    // Buscamos en el mapa el codigo
    auto resultado = zonas.find(codigo);  //auto contiene toda la declaración del mapa
    // Verificamos si lo encontramos
    if (resultado != zonas.end()) {
        // Retornamos 'second', que contiene el puntero Zona*
        return resultado->second;
    } else {
        return nullptr;
    }
}

// Muestra en consola todos los códigos y nombres de zonas registradas
// par.first es el código, par.second->getNombre() es el nombre
void Reserva::mostrarZonas() {
    cout << "Reserva: " << nombre << "\n";
    for (auto& par : zonas){
        cout << "==========================================" << endl;
        cout << "Zona: " << endl;
        cout << "Código: [ " << par.first << " ] " << endl;
        cout << "Nombre: " <<  par.second -> getNombre ()<< endl;

    }

}
