# Experiencia EcoMisión

**Hecho por:** Jerónimo Hurtado Mora / Juan Manuel Paredes Betancourt

## Descripción del proyecto

EcoMisión es un juego de exploración ambiental desarrollado en C++ con los conceptos aprendidos en nuestro curso de Programación Orientada a Objetos. En este juego controlas a un explorador que recorre una reserva natural compuesta por diferentes zonas. El explorador posee una energía limitada y un sistema de puntuación que aumenta conforme avanzas en tu objetivo: restaurar el entorno de las zonas rescatando animales, limpiando residuos, recolectando plantas para recuperar energía y utilizando portales para desplazarte entre zonas.

Técnicamente, el proyecto aplica herencia y polimorfismo mediante la clase abstracta `ElementoInteractivo`, mientras que la clase controladora `EcoMision` gestiona todo el flujo del juego. El proyecto fue desarrollado en Code::Blocks.

---

## Cómo compilar el proyecto

Antes de comenzar a jugar y probar el código, sigue estas instrucciones:

1. **Descargar los archivos**: Ve al repositorio en la carpeta `src` y descarga todos los archivos, incluidos los de las subcarpetas `CodeBlocks` y `model`, que contienen los archivos de configuración de Code::Blocks y los archivos `.cpp` y `.h`.

   ![Estructura de carpetas](https://github.com/user-attachments/assets/f402472a-277b-4059-93b1-f845127657d9)

2. **Abrir Code::Blocks**: Asegúrate de que tu instalación de Code::Blocks esté funcionando correctamente.

3. **Cargar el proyecto**: Selecciona "Open an existing Project" y busca el archivo `.cbp` que está en la subcarpeta que descargaste.

   ![Opción de abrir proyecto](https://github.com/user-attachments/assets/b2ec794d-e3c1-42d3-a8c7-67be0853a4e2)

4. **Localizar el main**: Una vez abierto el proyecto, encontrarás el archivo `main.cpp` en la carpeta "sources".

   ![Ubicación del main](https://github.com/user-attachments/assets/990b35b4-9c5c-42dd-a2d8-b1714fd2cdf7)

5. **Compilar y ejecutar**: Presiona el botón "Build and Run" para compilar el programa e iniciar tu experiencia en el juego.

   ![Botón Build and Run](https://github.com/user-attachments/assets/eb797cc5-0709-4ccc-b0e0-479ec130ece2)

---

## Archivos principales

| Importancia | Archivo | Descripción | Por qué es clave |
|---|---|---|---|
| **Alta** | `EcoMision.h/cpp` | Controlador principal del juego. Se encarga de inicializar la reserva, crear al explorador y gestionar el menú interactivo. | Es el cerebro del programa; sin esta clase no arranca el juego ni se coordina el flujo general. |
| **Alta** | `ElementoInteractivo.h/cpp` | Clase base abstracta que define el método virtual puro `interactuar()` para todos los elementos del mapa. | Implementa el polimorfismo, permitiendo manejar animales, plantas y residuos con la misma interfaz sin duplicar código. |
| **Media-Alta** | `Zona.h/cpp` | Representa un escenario de la reserva. Almacena la lista de elementos y ofrece el método `interactuar()` sobrecargado por índice o nombre. | Funciona como el contenedor del entorno y organiza qué objetos hay en cada lugar para que el explorador pueda interactuar con ellos. |
| **Media** | `Explorador.h/cpp` | Modela al personaje del jugador, controlando su energía, puntos ambientales y zona actual. | Es el protagonista; toda la jugabilidad se basa en cómo cambian sus estadísticas según tus decisiones. |
| **Media** | Clases derivadas (`AnimalHerido`, `PlantaMedicinal`, `ResiduoContaminante`, etc.) | Implementaciones concretas de `ElementoInteractivo` que definen el comportamiento de cada objeto. | Aquí se ve el polimorfismo en acción, otorgándole lógica propia a cada mecánica (limpiar, curar, recargar). |

---

## Ejecución

A continuación se muestra el funcionamiento del proyecto:

**Menú de inicio con estado inicial del explorador**

![Menú inicio](https://github.com/user-attachments/assets/0eea4944-5806-4e43-a648-dbb987ab4985)

**Objetos disponibles en la zona de aparición**

![Objetos zona](https://github.com/user-attachments/assets/be484d86-5b70-4e19-8f63-5ea1ad0fac60)

**Interacción con un objeto (AnimalHerido)**

![Interacción animal](https://github.com/user-attachments/assets/fbb2590e-2b0e-4a95-ad69-280ab255b2c4)

**Estado del explorador después de curar al animal**

![Estado actualizado](https://github.com/user-attachments/assets/c9efad28-dd75-4c58-8de5-c4c262dde531)

**Menú de configuración**

![Menú config](https://github.com/user-attachments/assets/fb068c5c-3c8c-479e-9029-588293d8915f)

---
