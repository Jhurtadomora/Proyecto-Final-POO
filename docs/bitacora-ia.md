# Bitácora de IA Generativa - EcoMisión

## ¿Para qué usamos la IA generativa?

El uso de la inteligencia artificial generativa en el proyecto EcoMisión se enfocó principalmente en el soporte técnico y la validación de decisiones arquitectónicas, sin sustituir en ningún momento el desarrollo propio del código.

### Aplicaciones técnicas:

En el ámbito operativo, las consultas permitieron optimizar el flujo de trabajo en el entorno Code::Blocks mediante el aprendizaje de atajos de teclado útiles para la edición ágil de líneas de código. 

La IA sirvió como herramienta de revisión para identificar la raíz de ocho errores de compilación específicos distribuidos en archivos clave como `EcoMision.cpp`, `Zona.h`, `EstacionEnergia.cpp`, `PlantaMedicinal.cpp`, `PortalDeRuta.cpp` y `ResiduoContaminante.cpp`. Esto permitió corregir fallos de sintaxis, llaves desbalanceadas, declaraciones ausentes y problemas con llamadas a métodos.

### Aplicaciones en documentación:

Se utilizó la IA para estructurar formalmente las ideas del archivo de documentación, mejorando su coherencia, cohesión y ortografía general. El README y la presente bitácora fueron refinados bajo esta asistencia.

---

## ¿Qué decisión de diseño revisamos con la IA?

Una de las discusiones fundamentales que se revisaron con la inteligencia artificial fue la definición de responsabilidades para determinar quién gestiona la interacción con los elementos del juego: el Explorador o la Zona.

### Análisis de alternativas:

Inicialmente se contempló que el Explorador accediera de forma directa a los elementos. Sin embargo, esto implicaba que el personaje rompiera el principio de encapsulamiento al tener que ingresar a los datos internos de la Zona para extraer su vector de elementos.

### Decisión final: La Zona maneja la interacción

La Zona debe manejar la interacción porque es la clase propietaria de los objetos presentes en su mapa. Bajo este esquema, el Explorador simplemente notifica a la Zona su intención mediante un índice y se envía a sí mismo como parámetro para ser afectado por el elemento correspondiente.

**Analogía:** Es similar a la dinámica de un cliente que le solicita un artículo a un empleado en una tienda, en lugar de ingresar directamente al almacén para buscarlo por su cuenta.

**Implementación:**
```cpp
// La Zona recibe la orden y ejecuta la interacción
explorador->getZonaActual()->interactuar(indice, explorador);
```

---

## Lo que decidimos aplicar y lo que descartamos

### Sugerencias aceptadas:

- **Funciones de acceso controlado (Getters):** Verificar estados privados sin exponer las variables, manteniendo el encapsulamiento.
- **Correcciones específicas de sintaxis:** Superar los bloqueos del compilador mediante identificación precisa de errores.


### Sugerencias rechazadas o modificadas:

- **Código genérico:** Se descartaron bloques de código que nos arrojaba directamente, creando nuestras propias soluciones.
- **Soluciones superficiales:** Se evitó aplicar correcciones sin comprensión profunda. Siempre se priorizó la investigación detallada de cada fallo para asegurar la comprensión de los conceptos de programación orientada a objetos.

---

## Defensa del Proyecto y Fortalezas del Equipo

Es importante resaltar que tanto Jero H como JuanMa P cuentan con la capacidad completa de defender, explicar y modificar la totalidad del código fuente de EcoMisión, ya que la arquitectura general y la lógica del juego fueron estructuradas de forma colaborativa por ambos integrantes.

Sin embargo, el trabajo en equipo permitió potenciar fortalezas específicas según la distribución del desarrollo:

### Fortaleza de Jero H

**Área de especialización:** Jerarquía de herencia y polimorfismo

- Se hizo fuerte en el diseño de la clase abstracta `ElementoInteractivo` y sus cuatro clases derivadas (`AnimalHerido`, `PlantaMedicinal`, `ResiduoContaminante` y `EstacionEnergia`).
- Domina temas como la sobreescritura del método virtual puro `interactuar()`, el paso de parámetros en constructores y la gestión del ciclo de vida de los elementos.


### Fortaleza de JuanMa P

**Área de especialización:** Motor principal del juego y gestión de flujo

- Se consolidó en las clases de control macro: `Explorador`, `Zona`, `Reserva` y `EcoMision`.
- Lidera la defensa de la navegación entre mapas, la gestión de turnos, los puntajes ambientales y la administración del vector de elementos internos.


---

## En conclusión

La Ia se uso como herramienta,funcionó como un apoyo  de validación , asegurando que el criterio de diseño, la lógica de la reserva forestal y el aprendizaje conceptual fueran desarrollados de manera completamente autónoma por nosotros. La IA nunca reemplazó el razonamiento propio; por el contrario, sirvió como un mecanismo de validación y refinamiento de ideas ya generadas internamente.
