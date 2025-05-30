### **Cheat Sheet de C**
#### 🛠 **Configuración Inicial**
- Compilar un programa en C:  
  ```bash
  gcc programa.c -o programa
  ./programa
  ```
- Incluir bibliotecas estándar:  
  ```c
  #include <stdio.h>   // Entrada y salida estándar
  #include <stdlib.h>  // Funciones de utilidad
  #include <string.h>  // Manejo de strings
  ```

---

### 🏗 **Estructura Básica**
```c
#include <stdio.h>

int main() {
    printf("¡Hola, mundo!\n"); // Imprime un mensaje
    return 0; // Indica que el programa finalizó correctamente
}
```

---

### 📌 **Tipos de Datos**
| Tipo        | Descripción |
|------------|-------------|
| `int`      | Entero (4 bytes) |
| `float`    | Flotante simple (4 bytes) |
| `double`   | Flotante doble precisión (8 bytes) |
| `char`     | Caracter individual |
| `bool`     | Booleano (`true` / `false` en `<stdbool.h>`) |
| `void`     | Sin valor de retorno |

---

### 🚀 **Variables y Constantes**
```c
int edad = 25;
const float PI = 3.1416;
```

---

### 🔄 **Entrada y Salida**
```c
char nombre[50];
printf("Ingrese su nombre: ");
scanf("%s", nombre); // Lee entrada sin espacios
printf("Hola, %s!\n", nombre);
```

---

### 🔁 **Estructuras de Control**
```c
// Condicionales
int edad = 20;
if (edad >= 18) {
    printf("Mayor de edad\n");
} else {
    printf("Menor de edad\n");
}

// Switch
int opcion = 1;
switch (opcion) {
    case 1: printf("Opción 1\n"); break;
    case 2: printf("Opción 2\n"); break;
    default: printf("Opción no válida\n");
}

// Bucles
for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
}

int i = 0;
while (i < 5) {
    printf("%d\n", i);
    i++;
}
```

---

### 📌 **Manejo de Strings**
```c
char cadena1[20] = "Hola";
char cadena2[20] = "Mundo";

strcat(cadena1, cadena2);   // Concatenar cadenas
printf("%s\n", cadena1);    // Salida: "HolaMundo"

printf("Longitud: %lu\n", strlen(cadena1)); // Tamaño de cadena

if (strcmp(cadena1, cadena2) == 0) {
    printf("Las cadenas son iguales\n");
}
```

---

### 🎯 **Estructuras de Datos**
```c
// Arrays
int numeros[] = {1, 2, 3, 4, 5};
printf("Primer elemento: %d\n", numeros[0]);

// Structs
struct Persona {
    char nombre[50];
    int edad;
};

struct Persona persona1 = {"Juan", 25};
printf("Nombre: %s, Edad: %d\n", persona1.nombre, persona1.edad);
```

---

### 🛠 **Funciones**
```c
// Definición de función
int suma(int a, int b) {
    return a + b;
}

// Uso en main
int resultado = suma(3, 4);
printf("Resultado: %d\n", resultado);
```

---

### 🔄 **Recursividad**
```c
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
```

---

### 📌 **Punteros**
```c
int a = 10;
int *p = &a; // Puntero a la variable a

printf("Valor de a: %d\n", *p); // Acceso a la dirección almacenada
```

---

### 🚀 **Memoria Dinámica**
```c
int *ptr = (int *)malloc(5 * sizeof(int));
free(ptr); // Liberar memoria
```

---

### 🏁 **Finalización**
¡Esta guía rápida te ayudará a recordar los aspectos esenciales de C! 🚀  