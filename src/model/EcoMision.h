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

    // Punto de entrada principal del programa
    void iniciar();

    // Crea la reserva y registra todas las zonas con sus elementos
    void prepararReserva();

    // Crea al explorador y lo ubica en la zona inicial
    void crearExplorador();

    // Ejecuta una secuencia de interacciones de demostración
    void ejecutarDemostracion();

    // Muestra el menu
    void mostrarMenu ();

    // Muestra el menu de configuracion personalizada
    void menuConfiguracion();
};

#endif
