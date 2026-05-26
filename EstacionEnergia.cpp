#include "EstacionEnergia.h"
#include "Explorador.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;


EstacionEnergia::EstacionEnergia(string nombre, string descripcion, int cantidadEnergia)
    : ElementoInteractivo(nombre, descripcion), usada(false), cantidadEnergia(cantidadEnergia){
}



void EstacionEnergia::interactuar(Explorador* explorador) {
     if (!usada){
        cout<<"Se ha usado la estacion " << endl;
        usada = true;
        explorador->recuperarEnergia(cantidadEnergia);
    } else{
    cout<<"Esta estacion ya se uso" << endl;
    }
}


bool EstacionEnergia::fueUsada() {
    return usada;

}
