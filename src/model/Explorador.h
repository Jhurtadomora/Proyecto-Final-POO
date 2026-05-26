#ifndef EXPLORADOR_H
#define EXPLORADOR_H

#include <string>
using std::string;


class Zona;

class Explorador {
private:
    string nombre;
    int energia;
    int puntajeAmbiental;
    Zona* zonaActual;

public:

    Explorador(string nombre);


    ~Explorador();

    string getNombre();
    int getEnergia();
    int getPuntaje();
    Zona* getZonaActual();


    void perderEnergia(int cantidad);
    void recuperarEnergia(int cantidad);
    void aumentarPuntaje(int cantidad);
    void cambiarZona(Zona* zona);


    void mostrarEstado();
};

#endif
