### **🔹 Concepto de Búsqueda Binaria**
La **búsqueda binaria** es un algoritmo eficiente para encontrar un elemento en un arreglo **ordenado**. Se basa en dividir el conjunto en dos partes y descartar la mitad donde el elemento no puede estar.

- **Requisito:** El arreglo debe estar **ordenado previamente**.
- **Complejidad:** O(log n), lo que lo hace mucho más eficiente que la búsqueda lineal (O(n)).
- **Uso:** Se aplica en bases de datos, sistemas de archivos, algoritmos de optimización y más.

---

### **📌 Algoritmo de Búsqueda Binaria**
1. **Definir los límites** (`izquierda` y `derecha`) del arreglo.
2. **Obtener el índice medio** y comparar el valor buscado con el elemento en ese índice.
3. **Si es el valor buscado**, se devuelve el índice.
4. **Si es menor**, descartar la mitad derecha.
5. **Si es mayor**, descartar la mitad izquierda.
6. **Repetir hasta encontrar el elemento o concluir que no existe**.

---

### **📌 Ejemplo 1: Implementación Básica**
```c
#include <stdio.h>

// Función de búsqueda binaria
int busquedaBinaria(int arr[], int izquierda, int derecha, int objetivo) {
    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        if (arr[medio] == objetivo) return medio; // Elemento encontrado
        if (arr[medio] < objetivo) izquierda = medio + 1; // Buscar en la mitad derecha
        else derecha = medio - 1; // Buscar en la mitad izquierda
    }
    return -1; // Elemento no encontrado
}

int main() {
    int numeros[] = {10, 20, 30, 40, 50, 60, 70}; // Ordenado previamente
    int n = sizeof(numeros) / sizeof(numeros[0]);
    int buscar = 40;

    int resultado = busquedaBinaria(numeros, 0, n - 1, buscar);

    if (resultado != -1)
        printf("Elemento %d encontrado en la posición %d\n", buscar, resultado);
    else
        printf("Elemento no encontrado\n");

    return 0;
}
```

**🛠 Explicación del código:**
- Se define `izquierda = 0` y `derecha = tamaño - 1`.
- Se compara el elemento medio (`medio = (izquierda + derecha) / 2`) con el objetivo.
- Se ajustan los límites de búsqueda eliminando la mitad incorrecta.
- Se devuelve el índice del elemento o `-1` si no se encuentra.

---

### **📌 Ejemplo 2: Búsqueda Binaria Recursiva**
```c
#include <stdio.h>

// Implementación recursiva de búsqueda binaria
int busquedaBinariaRecursiva(int arr[], int izquierda, int derecha, int objetivo) {
    if (izquierda > derecha) return -1; // Caso base: no encontrado

    int medio = izquierda + (derecha - izquierda) / 2;

    if (arr[medio] == objetivo) return medio;
    else if (arr[medio] < objetivo) return busquedaBinariaRecursiva(arr, medio + 1, derecha, objetivo);
    else return busquedaBinariaRecursiva(arr, izquierda, medio - 1, objetivo);
}

int main() {
    int numeros[] = {5, 15, 25, 35, 45, 55, 65};
    int n = sizeof(numeros) / sizeof(numeros[0]);
    int buscar = 25;

    int resultado = busquedaBinariaRecursiva(numeros, 0, n - 1, buscar);

    if (resultado != -1)
        printf("Elemento %d encontrado en la posición %d\n", buscar, resultado);
    else
        printf("Elemento no encontrado\n");

    return 0;
}
```

**🛠 Características del enfoque recursivo:**
- Se **divide y conquista** hasta encontrar el elemento.
- Puede ser menos eficiente en algunos entornos debido al uso de **memoria adicional** en cada llamada recursiva.

---

### **📌 Ejemplo 3: Búsqueda Binaria en un Arreglo de Estructuras**
En este caso, buscamos un estudiante por su número de inscripción en un **arreglo de estructuras**.

```c
#include <stdio.h>
#include <string.h>

struct Estudiante {
    int numeroInscripcion;
    char nombre[50];
};

// Búsqueda binaria en estructuras
int buscarEstudiante(struct Estudiante estudiantes[], int n, int numero) {
    int izquierda = 0, derecha = n - 1;

    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        if (estudiantes[medio].numeroInscripcion == numero) return medio;
        if (estudiantes[medio].numeroInscripcion < numero) izquierda = medio + 1;
        else derecha = medio - 1;
    }
    return -1;
}

int main() {
    struct Estudiante estudiantes[] = {
        {101, "Juan"}, {202, "Maria"}, {303, "Pedro"}, {404, "Ana"}
    };
    int n = sizeof(estudiantes) / sizeof(estudiantes[0]);
    int buscar = 303;

    int resultado = buscarEstudiante(estudiantes, n, buscar);

    if (resultado != -1)
        printf("Estudiante encontrado: %s (Inscripción %d)\n", estudiantes[resultado].nombre, buscar);
    else
        printf("Estudiante no encontrado\n");

    return 0;
}
```

**🛠 Aplicaciones del enfoque estructurado:**
- Buscar elementos en **bases de datos simuladas**.
- Optimizar la recuperación de información en **listas organizadas**.

---

### **📌 Comparación de Métodos de Búsqueda**
| Algoritmo            | Complejidad | Pros | Contras |
|----------------------|------------|------|---------|
| **Búsqueda Lineal**  | O(n)       | Simple | Ineficiente para grandes conjuntos |
| **Búsqueda Binaria** | O(log n)   | Rápida en arreglos ordenados | Requiere orden previo |
| **Hashing**         | O(1)       | Muy rápido | Requiere estructura adicional |

---

### **🔥 Conclusión**
✔ **La búsqueda binaria es ideal para grandes conjuntos de datos** debido a su eficiencia.  
✔ **Debe aplicarse en arreglos ordenados previamente**, por lo que se recomienda combinarla con un buen algoritmo de ordenamiento.  
✔ **Existen versiones recursivas y estructuradas**, según la necesidad del problema.  

---

