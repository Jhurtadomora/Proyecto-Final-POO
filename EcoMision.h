#ifndef ECOMISION_H
#define ECOMISION_H

#include "Reserva.h"
#include "Explorador.h"

class EcoMision {
private:
    Reserva* reserva;
    Explorador* explorador;

public:

    EcoMision();


    ~EcoMision();


    void iniciar();


    void prepararReserva();


    void crearExplorador();


    void ejecutarDemostracion();


    void mostrarMenu ();


    void menuConfiguracion();
};

#endif
