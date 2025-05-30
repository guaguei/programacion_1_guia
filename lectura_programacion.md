# Introducción a los Paradigmas y Fundamentos de Programación en C

## 1. Paradigmas de Programación

Los paradigmas de programación son enfoques o estilos para estructurar y escribir código. Los más relevantes son:

- **Imperativo:** El programa se compone de instrucciones secuenciales que modifican el estado del sistema.
- **Funcional:** Se basa en funciones puras, evita el cambio de estado y el uso de variables mutables.
- **Orientado a objetos:** Organiza el código en clases y objetos, aplicando principios como encapsulación, herencia y polimorfismo.

> **Nota:** El lenguaje **C** es principalmente **imperativo**, destacando por su eficiencia y control sobre la memoria.

---

## 2. Programación Imperativa en C

La programación imperativa implica ejecutar instrucciones paso a paso, modificando el estado del programa mediante variables y estructuras de control como bucles y condicionales.

---

## 3. Algoritmos

Un **algoritmo** es una secuencia ordenada de pasos para resolver un problema. En C, los algoritmos se implementan usando funciones, estructuras de control y estructuras de datos.

**Ejemplo: Factorial de un número**

```c
#include <stdio.h>

// Calcula el factorial de un número entero n
int factorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero = 5;
    printf("Factorial de %d es %d\n", numero, factorial(numero));
    return 0;
}
```

---

## 4. Estrategias de Resolución de Problemas

- **Dividir y conquistar:** Divide el problema en subproblemas más pequeños (ejemplo: recursión).
- **Algoritmos voraces:** Toman la mejor decisión posible en cada paso.
- **Programación dinámica:** Almacenan resultados intermedios para optimizar cálculos repetidos.

---

## 5. Tipos de Datos en C

- **Enteros:** `int`
- **Flotantes:** `float`, `double`
- **Caracteres:** `char`
- **Booleanos:** `bool` (requiere `<stdbool.h>`)

---

## 6. Variables y Constantes

- **Variables:** Almacenan datos que pueden cambiar durante la ejecución.
- **Constantes:** Valores fijos que no cambian.

**Ejemplo:**

```c
const float PI = 3.1416; // Constante
int edad = 25;           // Variable
```

---

## 7. Estructuras de Control Básicas

- **Condicionales:** `if`, `else`, `switch`
- **Bucles:** `for`, `while`, `do-while`

**Ejemplo de condicional:**

```c
if (edad >= 18) {
    printf("Eres mayor de edad\n");
} else {
    printf("Eres menor de edad\n");
}
```

---

## 8. Estructuras de Datos

Permiten organizar y gestionar la información eficientemente. En C se utilizan:

- **Arrays**
- **Listas enlazadas**
- **Pilas y colas**
- **Árboles**

**Ejemplo de array:**

```c
int numeros[] = {1, 2, 3, 4, 5};
```

---

## 9. Abstracción con Funciones

Las funciones permiten reutilizar código y estructurar mejor los programas.

**Ejemplo:**

```c
// Suma dos números enteros
int suma(int a, int b) {
    return a + b;
}
```

---

## 10. Recursividad

Un algoritmo recursivo se define en términos de sí mismo.

**Ejemplo:**

```c
// Calcula el factorial de n de forma recursiva
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
```

---

## 11. Algoritmos de Búsqueda y Ordenamiento

- **Búsqueda lineal**
- **Búsqueda binaria**
- **Ordenamiento burbuja**
- **QuickSort**

**Ejemplo: Búsqueda binaria**

```c
// Busca un elemento en un array ordenado usando búsqueda binaria
int busquedaBinaria(int arr[], int izquierda, int derecha, int objetivo) {
    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;
        if (arr[medio] == objetivo) return medio;
        if (arr[medio] < objetivo) izquierda = medio + 1;
        else derecha = medio - 1;
    }
    return -1; // No encontrado
}
```

---

## 12. Ordenamiento Burbuja

El **ordenamiento burbuja** compara elementos adyacentes e intercambia sus posiciones si están en el orden incorrecto. Este proceso se repite hasta que el array está ordenado.

**Ejemplo en C:**

```c
#include <stdio.h>

// Ordena un array usando el método burbuja
void ordenamientoBurbuja(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Intercambia los elementos
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Imprime los elementos de un array
void imprimirArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numeros[] = {64, 25, 12, 22, 11};
    int n = sizeof(numeros) / sizeof(numeros[0]);

    printf("Array original: ");
    imprimirArray(numeros, n);

    ordenamientoBurbuja(numeros, n);

    printf("Array ordenado: ");
    imprimirArray(numeros, n);

    return 0;
}
```

**¿Cómo funciona este código?**

1. **Dos bucles anidados** recorren el array varias veces.
2. **Comparación de elementos adyacentes:** Si el elemento actual es mayor que el siguiente, se intercambian.
3. **El número más grande "burbujea" hasta el final** en cada iteración.
4. **El proceso se repite** hasta que el array está ordenado.

---

> **Resumen:**  
> Este documento introduce los conceptos fundamentales de la programación en C, desde los paradigmas hasta los algoritmos básicos, proporcionando ejemplos prácticos y explicaciones claras para facilitar el aprendizaje.



