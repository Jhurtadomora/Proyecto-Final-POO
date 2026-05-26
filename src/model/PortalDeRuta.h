#ifndef PORTALDERU_H
#define PORTALDERU_H
#include "ElementoInteractivo.h"
#include "Zona.h"

using std:: string;

class PortalDeRuta : public ElementoInteractivo {
private:
    Zona* zonaDestino;

public:

    PortalDeRuta(string nombre, string descripcion, Zona* zonaDestino);


    void interactuar(Explorador* explorador) override;
};

#endif
