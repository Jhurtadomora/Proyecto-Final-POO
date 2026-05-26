#include "ResiduoContaminante.h"
#include "Explorador.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;


ResiduoContaminante::ResiduoContaminante(string nombre, string descripcion, int energiaCosto, int puntajeAmbiental)
    : ElementoInteractivo(nombre, descripcion),limpio(false), energiaCosto(energiaCosto),puntajeAmbiental(puntajeAmbiental){
}


void ResiduoContaminante::interactuar(Explorador* explorador) {
     if (!limpio){
        cout<<"se han limpiado los residuos " << endl;
        limpio = true;
        explorador->perderEnergia(energiaCosto);
        explorador->aumentarPuntaje(puntajeAmbiental);
    } else{
    cout<<"ya has limpiado los residuos de esta area" << endl;
    }
}


bool ResiduoContaminante::estaLimpio() {
    return limpio;
}
