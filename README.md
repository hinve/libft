# Libft -> El primer proyecto del cursus de 42 <-

**Libft** es un proyecto de la escuela 42 que consiste en crear una biblioteca en **C**. 
El objetivo principal es replicar una serie de funciones estándar desarrolladas por ti mismo, así como funciones adicionales que serán muy útiles a lo largo del curso. Además de crear las funciones, aprendí a crear **bibliotecas** y a usar **Makefile**.

## Características
- Implementación de funciones estándar de C como `strlen`, `atoi`, `memset`, entre otras.
- Funciones adicionales útiles, como manejo de listas enlazadas, manipulación de memoria y otras utilidades.
- Creación y uso de un **Makefile** para compilar la biblioteca de manera eficiente.

## Estructura del proyecto
```
libft/
├── ft_*.c # Implementación de las funciones.
├── libft.h # Cabecera de la biblioteca.
├── Makefile # Scripts de compilación.
└── README.md # Descripción del proyecto.
```
## Uso
Para usar la biblioteca en tu propio proyecto:
1. Clona el repositorio en tu máquina:
   ```
   $ git clone https://github.com/hinve/libft.git
   $ cd libft
   ```
2. Compila la **biblioteca**:
   ```
   $ make
   ```
3. Incluye la biblioteca en tu proyecto enlazándola durante la compilación. Asegúrate de incluir el archivo de cabecera **libft.h** en los archivos de tu proyecto donde necesites las funciones de la biblioteca.
## Contribuciones
Este proyecto es principalmente para mi aprendizaje personal, pero si tienes alguna sugerencia o mejora, no dudes en contactarme :).
