#ifndef RESIDUOCONTAMINANTE_H
#define RESIDUOCONTAMINANTE_H
#include "ElementoInteractivo.h"

using std::string;

class ResiduoContaminante : public ElementoInteractivo {
private:
    bool limpio;
    int energiaCosto;
    int puntajeAmbiental;
public:

    ResiduoContaminante(string nombre, string descripcion, int energiaCosto, int puntajeAmbiental);


    void interactuar(Explorador* explorador) override;


    bool estaLimpio();
};

#endif
