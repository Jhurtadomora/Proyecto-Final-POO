#ifndef ZONA_H
#define ZONA_H

#include <string>
#include <vector>
#include "ElementoInteractivo.h"
using std::string;
using std::vector;


class Explorador;

class Zona {
private:
    string nombre;
    vector<ElementoInteractivo*> elementos;

public:

    Zona(string nombre);


    ~Zona();


    string getNombre();


    void agregarElemento(ElementoInteractivo* elemento);


    void mostrarElementos();




    void interactuar(int indice, Explorador* explorador);


    void interactuar(string nombre, Explorador* explorador);

};

#endif
