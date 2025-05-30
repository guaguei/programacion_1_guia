### **🔹 Concepto de Ordenamiento Burbuja**
El **Ordenamiento Burbuja** es un algoritmo de ordenamiento simple que funciona comparando elementos adyacentes e intercambiándolos si están en el orden incorrecto. Se repite el proceso hasta que el arreglo esté ordenado.

- **Complejidad:** O(n²) en el peor caso.
- **Uso:** Funciona bien con pequeños conjuntos de datos.
- **Mejora posible:** Se puede optimizar para detectar arreglos ya ordenados y detener la ejecución.

---

### **📌 Ejemplo 1: Ordenamiento Burbuja Básico**
Este ejemplo ordena un arreglo de enteros de menor a mayor.

```c
#include <stdio.h>

void ordenamientoBurbuja(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Intercambio de valores
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Función para imprimir el arreglo
void imprimirArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numeros[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(numeros) / sizeof(numeros[0]);

    printf("Arreglo original: ");
    imprimirArray(numeros, n);

    ordenamientoBurbuja(numeros, n);

    printf("Arreglo ordenado: ");
    imprimirArray(numeros, n);

    return 0;
}
```

**🛠 Explicación:**
- Se comparan elementos adyacentes y se intercambian si están desordenados.
- Se repiten los ciclos hasta que todos los elementos estén ordenados.

---

### **📌 Ejemplo 2: Ordenamiento Burbuja Optimizado**
En este caso, el algoritmo se detendrá si no hay intercambios en una iteración, lo que indica que el arreglo ya está ordenado.

```c
#include <stdio.h>

void ordenamientoBurbujaOptimizado(int arr[], int n) {
    int intercambiado;
    for (int i = 0; i < n - 1; i++) {
        intercambiado = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                intercambiado = 1;
            }
        }
        // Si no hubo intercambios, el arreglo ya está ordenado
        if (intercambiado == 0) break;
    }
}

int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    int n = sizeof(numeros) / sizeof(numeros[0]);

    printf("Arreglo antes de ordenar: ");
    imprimirArray(numeros, n);

    ordenamientoBurbujaOptimizado(numeros, n);

    printf("Arreglo ordenado: ");
    imprimirArray(numeros, n);

    return 0;
}
```

**🛠 Mejora incluida:**
- Si no hay cambios en una iteración, el algoritmo **finaliza anticipadamente**, reduciendo el tiempo de ejecución.

---

### **📌 Ejemplo 3: Ordenamiento Burbuja en una Estructura**
Este ejemplo ordena un **arreglo de estructuras**, útil en bases de datos simples.

```c
#include <stdio.h>
#include <string.h>

struct Estudiante {
    char nombre[30];
    int edad;
};

void ordenamientoBurbujaEstructuras(struct Estudiante arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].edad > arr[j + 1].edad) {
                struct Estudiante temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Estudiante estudiantes[] = {
        {"Juan", 22}, {"Maria", 20}, {"Pedro", 25}, {"Ana", 21}
    };
    int n = sizeof(estudiantes) / sizeof(estudiantes[0]);

    printf("Lista de estudiantes antes de ordenar:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %d años\n", estudiantes[i].nombre, estudiantes[i].edad);
    }

    ordenamientoBurbujaEstructuras(estudiantes, n);

    printf("\nLista de estudiantes ordenada por edad:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %d años\n", estudiantes[i].nombre, estudiantes[i].edad);
    }

    return 0;
}
```

**🛠 Aplicaciones:**
- Ordenar **registros** en bases de datos simples.
- Clasificar objetos complejos como productos, empleados, clientes, etc.

---

### **📌 Comparación de Ordenamiento Burbuja vs Alternativas**
| Algoritmo            | Complejidad | Pros | Contras |
|----------------------|------------|------|---------|
| **Burbuja**         | O(n²)       | Fácil de implementar | Ineficiente para grandes volúmenes de datos |
| **Seleccion**       | O(n²)       | Menos intercambios | No es muy rápido |
| **Inserción**       | O(n²)       | Bueno para casi ordenados | No escala bien |
| **MergeSort**       | O(n log n)  | Más rápido | Usa memoria extra |
| **QuickSort**       | O(n log n)  | Muy eficiente | Puede ser complicado |

---

### **🔥 Conclusión**
- **Ordenamiento Burbuja** es útil cuando el conjunto de datos es pequeño.
- **Se puede optimizar** para mejorar el rendimiento si el arreglo está casi ordenado.
- **Para volúmenes grandes**, **QuickSort** o **MergeSort** son preferibles.

---

