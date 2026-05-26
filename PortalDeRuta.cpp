#include "PortalDeRuta.h"
#include "Explorador.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;


PortalDeRuta::PortalDeRuta(string nombre, string descripcion, Zona* zonaDestino)
    : ElementoInteractivo(nombre, descripcion),zonaDestino(zonaDestino) {
}


void PortalDeRuta::interactuar(Explorador* explorador) {
    if (zonaDestino != nullptr){
        cout << "¡Has activado el portal: " << getNombre() << endl;
        cout << "Teletransportando al explorador hacia la zona: " << zonaDestino -> getNombre() << endl;
        explorador -> cambiarZona(zonaDestino);
    } else {
        cout << "El portal no tiene destino asignado." << endl;
    }
}

