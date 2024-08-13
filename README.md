# Libft ->The first 42 cursus project <-
**Libft** es un proyecto de 42 schools que consiste en la creación de una libreria en **C**.
El objetivo principal es replicar un montón de funciones ya existentes desarrolladas por uno mismo, además de      funciones adicionales que serán muy útiles a lo largo del curso en cuestión. Además de crear las funciones         aprendí a crear **librerías** y a usar **Makefile**.
## Características
- Implementación de funciones estándar en C como **strlen**, **atoi**, **memset**, entre otras.
- Funciones adicionales útiles como manejo de listas enlazadas, manipulación de memoria y otras utilidades.
- Creación y uso de un Makefile para compilar la librería de manera eficiente.
## Estructura del proyecto
```
libft/
├── ft_*.c            # Implementación de las funciones
├── libft.h           # Librería
└── Makefile          # Script para la compilación
```
## Uso
Para usar la librería en tu propio proyecto:
1. Clona el repositorio en tu máquina:
   ```
   $ git clone https://github.com/hinve/libft.git
   $ cd libft
   ```
2. Compila la libreria:
   ```
   $ make
   ```
3. Incluye la librería en tu proyecto enlazándola durante la compilación. Asegurate de incluir el archivo de cabecera **libft.h** en los archivos de tu proyecto donde necesites las funciones de la librería.
