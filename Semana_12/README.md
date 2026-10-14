# Semana 12

Solución de Visual Studio (`Semana_12.slnx`) con tres proyectos independientes. Cada uno tiene su propio `main`.

| Proyecto | Contenido |
|---|---|
| `Contenedor_Matricial` | Matrices en C++ y un contenedor matricial de objetos `Persona` (declaración en `.h`, implementación en `.cpp`). Incluye dos `main`: `main.cpp` (activo) y `Semana 12.cpp` (comentado, con los ejercicios `mat1`, `mat2` y `mat3`). |
| `Demeter_Mal_Ejemplo` | Ley de Demeter: el `Cliente` entra a la cocina (`mesero.getCocina().preparar(...)`). **Viola** la ley. |
| `Demeter_Buen_Ejemplo` | Ley de Demeter: el `Cliente` solo habla con el `Mesero` (`mesero.tomarOrden(...)`). **Respeta** la ley. |

## Cómo ejecutar
1. Abrir `Semana_12.slnx` con Visual Studio.
2. En el Explorador de soluciones: clic derecho sobre el proyecto que se quiere probar -> **Establecer como proyecto de inicio**.
3. Ejecutar con Ctrl+F5.
