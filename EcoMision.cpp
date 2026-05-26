#include "EcoMision.h"
#include "AnimalHerido.h"
#include "PlantaMedicinal.h"
#include "ResiduoContaminante.h"
#include "EstacionEnergia.h"
#include "PortalDeRuta.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;


EcoMision::EcoMision() {
    this -> reserva = nullptr;
    this -> explorador = nullptr;
}


EcoMision::~EcoMision() {
    delete reserva;
    delete explorador;
}


void EcoMision::iniciar() {
    cout << "--- Bienvenido a EcoMision ---";
    prepararReserva();
    crearExplorador();
    ejecutarDemostracion();
}

void EcoMision::prepararReserva() {
    reserva = new Reserva("Reserva Natural EcoMision");


    Zona* bosque = new Zona("Bosque Humedo");
    Zona* rio    = new Zona("Rio Contaminado");
    Zona* centro = new Zona("Centro de Recuperacion Animal");


    bosque->agregarElemento(new AnimalHerido("Oso",     "Un oso con una pata herida",  50));
    bosque->agregarElemento(new AnimalHerido("Ciervo",  "Un ciervo atrapado en ramas", 40));
    bosque->agregarElemento(new AnimalHerido("Ardilla", "Una ardilla con una herida",  30));

    bosque->agregarElemento(new PlantaMedicinal("Diente de Leon", "Planta con propiedades curativas", 20));
    bosque->agregarElemento(new PlantaMedicinal("Aloe",           "Planta cicatrizante",              25));
    bosque->agregarElemento(new PlantaMedicinal("Romero",         "Planta energizante",               15));

    bosque->agregarElemento(new ResiduoContaminante("Basura",   "Bolsas plasticas abandonadas", 10, 20));
    bosque->agregarElemento(new ResiduoContaminante("Cigarros", "Colillas en el suelo",          5, 15));
    bosque->agregarElemento(new ResiduoContaminante("Pilas",    "Pilas toxicas enterradas",     15, 30));

    bosque->agregarElemento(new EstacionEnergia("Estacion Bosque", "Panel solar entre los arboles", 30));
    bosque->agregarElemento(new PortalDeRuta("Portal Bosque", "Un portal hacia el rio", rio));


    rio->agregarElemento(new ResiduoContaminante("Aceite",    "Derrame de aceite en el agua",   20, 40));
    rio->agregarElemento(new ResiduoContaminante("Plasticos", "Botellas flotando en el rio",    10, 25));
    rio->agregarElemento(new ResiduoContaminante("Espuma",    "Espuma quimica en la corriente", 15, 35));

    rio->agregarElemento(new AnimalHerido("Nutria", "Una nutria enferma por contaminacion", 60));
    rio->agregarElemento(new AnimalHerido("Rana",   "Una rana con mutaciones por toxinas",   45));

    rio->agregarElemento(new EstacionEnergia("Estacion Rio", "Turbina de agua generadora", 25));
    rio->agregarElemento(new PortalDeRuta("Portal Rio", "Un portal hacia el centro", centro));


    centro->agregarElemento(new AnimalHerido("Aguila",  "Un aguila con el ala rota",         70));
    centro->agregarElemento(new AnimalHerido("Zorro",   "Un zorro desnutrido",                55));
    centro->agregarElemento(new AnimalHerido("Tortuga", "Una tortuga con plastico atorado",   50));

    centro->agregarElemento(new PlantaMedicinal("Manzanilla", "Planta calmante para animales", 20));
    centro->agregarElemento(new PlantaMedicinal("Calendula",  "Planta antiseptica natural",    30));

    centro->agregarElemento(new EstacionEnergia("Estacion Centro", "Generador del centro", 40));
    centro->agregarElemento(new PortalDeRuta("Portal Centro", "Un portal de regreso al bosque", bosque));


    reserva->agregarZona("bosque", bosque);
    reserva->agregarZona("rio",    rio);
    reserva->agregarZona("centro", centro);
}


void EcoMision::crearExplorador() {
    explorador = new Explorador("Juan Paredes");
    Zona* inicio = reserva->buscarZona("bosque");
    explorador->cambiarZona(inicio);
}

void EcoMision::menuConfiguracion(){
    int opcion = -1;

    while (opcion != 0) {
        cout << "\n=== MENU CONFIGURACION ===" << endl;
        cout << "Aqui podras personalizar tu reserva como quieras, menos los elementos, estos son predeterminados" << endl;
        cout << "Selecciona una opcion: " << endl;
        cout << "1. Crear reserva" << endl;
        cout << "2. Registrar zona con codigo" << endl;
        cout << "3. Crear explorador" << endl;
        cout << "4. Ubicar explorador en zona inicial" << endl;
        cout << "0. Volver al menu principal" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
             case 1: {

                delete reserva;
                reserva = nullptr;
                string nombreReserva;
                cout << "Digite el nombre de la reserva: ";
                cin >> nombreReserva;
                reserva = new Reserva(nombreReserva);
                cout << "Reserva creada" << endl;
                break;
            }
            case 2: {
                if (reserva == nullptr) {
                    cout << "Primero crea una reserva." << endl;
                    break;
                }
                string codigo, nombreZona;
                cout << "Digite el código de la zona (ej: bosque): ";
                cin >> codigo;
                cout << "Ponle un nombre a la zona: ";
                cin >> nombreZona;
                reserva->agregarZona(codigo, new Zona(nombreZona));
                cout << "Zona registrada" << endl;
                break;
            }
            case 3: {
                delete explorador;
                explorador = nullptr;
                string nombreExplorador;
                cout << "Agregue nombre del explorador: ";
                cin >> nombreExplorador;
                explorador = new Explorador(nombreExplorador);
                cout << "Explorador creado." << endl;
                break;
            }
            case 4: {
                if (explorador == nullptr || reserva == nullptr) {
                    cout << "Primero crea la reserva y el explorador." << endl;
                    break;
                }
                string codigo;
                cout << "Código de zona inicial: ";
                cin >> codigo;
                Zona* inicio = reserva->buscarZona(codigo);
                if (inicio != nullptr) {
                    explorador->cambiarZona(inicio);
                    cout << "Explorador ubicado en: " << inicio->getNombre() << endl;
                } else {
                    cout << "Zona no encontrada." << endl;
                }
                break;
            }
            case 0:
                cout << "Volviendo al menu principal." << endl;
            break;
            default:
                cout << "Opción invalida." << endl;
                break;
        }
    }


}
void EcoMision::mostrarMenu (){
    int opcion = -1;

    while (opcion != 0) {
        cout << "\n=== MENU ECOMISION ===" << endl;
        cout << "1. Ver estado del explorador" << endl;
        cout << "2. Ver zonas de la reserva" << endl;
        cout << "3. Ver elementos de la zona actual" << endl;
        cout << "4. Interactuar con elemento (por indice)" << endl;
        cout << "5. Interactuar con elemento (por nombre)" << endl;
        cout << "6. Cambiar de zona" << endl;
        cout << "7. Configurar personalmente la reserva" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:

                explorador->mostrarEstado();
                break;
            case 2:

                reserva->mostrarZonas();
                break;
            case 3:

                explorador->getZonaActual()->mostrarElementos();
                break;
            case 4: {

                int indice;
                cout << "¿Con que índice deseas interactuar? ";
                cin >> indice;
                explorador->getZonaActual()->interactuar(indice, explorador);
                break;
            }

            case 5: {

                string nombreElemento;
                cout << "¿Con que elemento deseas interactuar? ";
                cin >> nombreElemento;
                explorador->getZonaActual()->interactuar(nombreElemento, explorador);
                break;
            }
            case 6: {

                string codigo;
                cout << "¿A que zona quieres ir? (bosque, rio, vivero...): ";
                cin >> codigo;
                Zona* nueva = reserva->buscarZona(codigo);
                if (nueva != nullptr) {
                    explorador->cambiarZona(nueva);
                    cout << "Ahora estas en: " << nueva->getNombre() << endl;
                } else {
                    cout << "Zona no encontrada." << endl;
                }
                break;
            }
            case 7: {
                menuConfiguracion();
                break;
            }

            case 0:
                cout << "Hasta luego, explorador" << endl;
                break;

            default:
                cout << "Opcion inválida, Coloque otra opcion." << endl;
                break;
        }
    }
}

void EcoMision::ejecutarDemostracion() {
    mostrarMenu();
}

