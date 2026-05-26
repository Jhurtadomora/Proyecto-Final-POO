#include "PlantaMedicinal.h"
#include "Explorador.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;


PlantaMedicinal::PlantaMedicinal(string nombre, string descripcion, int energiaBonus)
    : ElementoInteractivo(nombre, descripcion),recolectada(false), energiaBonus(energiaBonus) {
}


void PlantaMedicinal::interactuar(Explorador* explorador) {
    if (!recolectada){
        cout<<"se ha recolectado la planta " << endl;
        recolectada = true;
        explorador ->recuperarEnergia(energiaBonus);
    } else{
    cout<<"ya has recolectado esta planta" << endl;
    }

}

bool PlantaMedicinal::fueRecolectada(){
    return recolectada;
}
