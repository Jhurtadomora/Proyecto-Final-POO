#include "Explorador.h"
#include "Zona.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;


Explorador::Explorador(string nombre) {
    this-> nombre = nombre;
    this-> energia = 100;
    this-> puntajeAmbiental = 0;
    this-> zonaActual = nullptr;
}


Explorador::~Explorador() {

}


string Explorador::getNombre() {
    return nombre;
}

int Explorador::getEnergia() {
    return energia;
}

int Explorador::getPuntaje() {
    return puntajeAmbiental;
}

Zona* Explorador::getZonaActual() {
    return zonaActual;
}



void Explorador::perderEnergia(int cantidad) {
    energia = energia - cantidad;
    if (energia < 0){
        energia = 0;
    }
}

void Explorador::recuperarEnergia(int cantidad) {
    energia = energia + cantidad;
}

void Explorador::aumentarPuntaje(int cantidad) {
    puntajeAmbiental = puntajeAmbiental + cantidad;
}


void Explorador::cambiarZona(Zona* zona) {
    zonaActual = zona;
}


void Explorador::mostrarEstado() {
    cout << "=== Estado del Explorador === " << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Energía: "  << energia << endl;
    cout << "Puntaje ambiental: "  << puntajeAmbiental << endl;
    if (zonaActual != nullptr){
        cout << "Zona actual: "  << zonaActual -> getNombre() << endl;
    }else{
        cout << "¡ El Explorador no esta en una zona actualmente !";
    }
}
