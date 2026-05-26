#ifndef ANIMALHERIDO_H
#define ANIMALHERIDO_H
#include "ElementoInteractivo.h"

using std::string;

class AnimalHerido : public ElementoInteractivo {
private:
    bool curado;
    int puntajeBonus;

public:

    AnimalHerido(string nombre, string descripcion, int puntajeBonus);



    void interactuar(Explorador* explorador) override;


    bool estaCurado();
};

#endif
