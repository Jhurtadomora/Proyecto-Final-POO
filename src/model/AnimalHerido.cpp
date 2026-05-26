#include "AnimalHerido.h"
#include "Explorador.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;


AnimalHerido::AnimalHerido(string nombre, string descripcion, int puntajeBonus)
    : ElementoInteractivo(nombre, descripcion), curado(false), puntajeBonus(puntajeBonus) {
}


void AnimalHerido::interactuar(Explorador*explorador){

    if (!curado){
        cout<<"has curado al animal " << endl;
        curado = true;
        explorador->aumentarPuntaje(puntajeBonus);
        explorador->perderEnergia(5);
    } else{
    cout<<"el animal ya esta curado" << endl;
    }

}
bool AnimalHerido::estaCurado() {
    return curado;
}
