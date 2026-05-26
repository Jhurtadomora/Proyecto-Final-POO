#ifndef PLANTAMEDICINAL_H
#define PLANTAMEDICINAL_H
#include "ElementoInteractivo.h"

using std::string;

class PlantaMedicinal : public ElementoInteractivo {
private:
    bool recolectada;
    int energiaBonus;

public:

    PlantaMedicinal(string nombre, string descripcion, int energiaBonus);


    void interactuar(Explorador* explorador) override;


    bool fueRecolectada();
};

#endif
