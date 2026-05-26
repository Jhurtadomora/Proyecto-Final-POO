#ifndef ESTACIONENERGIA_H
#define ESTACIONENERGIA_H
#include "ElementoInteractivo.h"

using std::string;

class EstacionEnergia : public ElementoInteractivo {
private:
    int cantidadEnergia;
    bool usada;

public:

    EstacionEnergia(string nombre, string descripcion, int cantidadEnergia);


    void interactuar(Explorador* explorador) override;


    bool fueUsada();
};

#endif
