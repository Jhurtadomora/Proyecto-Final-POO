# Experiencia Ecomision
Hecho por: Jerónimo Hurtado Mora / Juan Manuel Paredes Betancourt

## Descripcion del proyecto
EcoMisión es un juego de exploración ambiental hecho en C++ con lo aprendido durante nuestro curso de POO. En este juego controlas a un explorador en una reserva natural con diferentes zonas o entornos. El explorador cuenta con una energía que se puede agotar y un sistema de puntuación que aumenta a medida que cumples el objetivo del juego: restaurar el entorno de las zonas rescatando animales, limpiando basura, recogiendo plantas para recuperar energía y usando portales para moverte entre zonas. 

A nivel técnico, el proyecto aplica herencia y polimorfismo con la clase abstracta ElementoInteractivo, y el controlador EcoMision maneja todo el flujo del juego. El proyecto se desarrolló en el entorno de CodeBlocks. 
___
# Evidencia del proyecto

## Como compilar el proyecto
Antes de  comenzar a jugar y a probar el codigo,debemos saber como compilarlo y para ello hay que seguir las siguientes instrucciones:

1. Irse al apartado del repositorio llamado src y descargar todos los archivos que hay adentro, incluyendo los archivos de las subcarpetas llamadas CodeBlocks y model en las cuales se encuentran los archivos que se generan al crear un proyecto en CodeBlocks y los .cpp .h respectivamente.

<img width="1280" height="191" alt="image" src="https://github.com/user-attachments/assets/f402472a-277b-4059-93b1-f845127657d9" />

2. Al haber descargado todos los archivos de la carpeta dirijite hacia tu CodeBlocks (asegurate previamente que tu CodeBlocks compile bien).

3. Al abrir el CodeBlocks seleccionar la opcion de " Open an existing Project " y seleccionas el archivo.cpb que se encuentra dentro de la subcarpeta de la carpeta que descargaste anteriormente.

   <img width="212" height="87" alt="image" src="https://github.com/user-attachments/assets/b2ec794d-e3c1-42d3-a8c7-67be0853a4e2" />


5. Al selecionarlo, te abrira el proyecto y para ejecutarlo busca el main, el cual se encuentra en sources ya que este es un .cpp .

<img width="235" height="63" alt="image" src="https://github.com/user-attachments/assets/990b35b4-9c5c-42dd-a2d8-b1714fd2cdf7" />

6. Una vez dentro del main presiona el boton llamado " Build and Run " para poder que el programa compile y comiences tu experiencia en el Juego. 

<img width="365" height="273" alt="image" src="https://github.com/user-attachments/assets/eb797cc5-0709-4ccc-b0e0-479ec130ece2" />

  

## Archivos principales

En realidad todos los archivos en este proyecto son bastante importantes pero una posible clasificacion de estos seria:

| Importancia | Archivo | Descripción | Por qué es clave |
|---|---|---|---|
| Alta | `EcoMision.h/cpp` | Controlador principal del juego. Se encarga de inicializar la reserva, crear al explorador y correr el menú interactivo. | Es el cerebro del programa; sin esta clase no arranca el juego ni se coordina el flujo. |
| Alta | `ElementoInteractivo.h/cpp` | Clase base abstracta que define el método virtual puro `interactuar()` para todo lo que hay en el mapa. | Es la base del polimorfismo, permitiendo manejar animales, plantas o residuos con la misma interfaz sin repetir código. |
| Media-Alta | `Zona.h/cpp` | Representa un escenario de la reserva. Guarda la lista de elementos y tiene el método `interactuar()` sobrecargado por índice o nombre. | Funciona como el contenedor del mapa y organiza qué objetos hay en cada lugar para que el explorador interactúe con ellos. |
| Media | `Explorador.h/cpp` | Modela al personaje del usuario, controlando su energía, los puntos ambientales y la zona donde está parado. | Es el protagonista; toda la jugabilidad se basa en cómo cambian sus estadísticas según las decisiones que tome. |
| Media | Clases derivadas (`AnimalHerido`, `PlantaMedicinal`, `ResiduoContaminante`, etc.) | Las implementaciones reales de `ElementoInteractivo` que definen el comportamiento de cada objeto. | Es donde se ve el polimorfismo en acción, dándole la lógica propia a cada mecánica (limpiar, curar, recargar). |

## Ejecución
En las siguiente fotos se obervara el funcionamiento del proyecto

<img width="402" height="323" alt="image" src="https://github.com/user-attachments/assets/0eea4944-5806-4e43-a648-dbb987ab4985" />

Menu de inicio con estado inical del explorador

<img width="435" height="566" alt="image" src="https://github.com/user-attachments/assets/be484d86-5b70-4e19-8f63-5ea1ad0fac60" />

Objetos en la zona de aparicion.

<img width="291" height="158" alt="image" src="https://github.com/user-attachments/assets/fbb2590e-2b0e-4a95-ad69-280ab255b2c4" />

Interaccion con objeto. ( En este caso animalHerido )

<img width="348" height="193" alt="image" src="https://github.com/user-attachments/assets/c9efad28-dd75-4c58-8de5-c4c262dde531" />

Estado del explorador luego de curar al animal.

<img width="671" height="120" alt="image" src="https://github.com/user-attachments/assets/fb068c5c-3c8c-479e-9029-588293d8915f" />

Menu de Configuracion


___
