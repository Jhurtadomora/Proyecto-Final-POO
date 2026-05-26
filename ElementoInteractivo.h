#ifndef ELEMENTOINTERACTIVO_H
#define ELEMENTOINTERACTIVO_H
#include <string>

using std::string;


class Explorador;

class ElementoInteractivo {
protected:
    string nombre;
    string descripcion;

public:

    ElementoInteractivo(string nombre, string descripcion);


    virtual ~ElementoInteractivo();


    string getNombre();
    string getDescripcion();


    virtual void interactuar(Explorador* explorador) = 0;


    virtual void mostrarInfo();
};

#endif
