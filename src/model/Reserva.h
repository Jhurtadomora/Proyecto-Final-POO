#ifndef RESERVA_H
#define RESERVA_H

#include <string>
#include <unordered_map>
#include "Zona.h"

using std::string;
using std::unordered_map;

class Reserva {
private:
    string nombre;
    unordered_map<string, Zona*> zonas;

public:

    Reserva(string nombre);


    ~Reserva();

    string getNombre();


    void agregarZona(string codigo, Zona* zona);


    Zona* buscarZona(string codigo);


    void mostrarZonas();
};

#endif
