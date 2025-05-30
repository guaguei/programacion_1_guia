## **📌 Parcial Teórico de C**
### **Sección 1: Fundamentos de C**
**1️⃣ ¿Qué es el lenguaje C y por qué es importante en la programación?**  
✅ C es un lenguaje de programación de propósito general, desarrollado en los años 70 por **Dennis Ritchie**. Es fundamental porque:  
   - Es el **precursor** de muchos lenguajes modernos como C++, Java y Python.  
   - Tiene **alto rendimiento** y acceso directo a la memoria.  
   - Se usa en **sistemas operativos**, software embebido y drivers.  

**2️⃣ ¿Qué significan los términos compilación y ejecución en C?**  
✅ **Compilación** es el proceso donde el código fuente se transforma en código máquina ejecutable.  
✅ **Ejecución** es cuando el programa compilado se carga en la memoria y se ejecuta.  

**3️⃣ ¿Cuál es la diferencia entre un lenguaje compilado y uno interpretado?**  
✅ **Compilado (C, C++)**: Se traduce todo el código antes de ejecutarse. Más rápido.  
✅ **Interpretado (Python, JavaScript)**: Se ejecuta línea por línea, sin una fase de compilación explícita.  

**4️⃣ ¿Para qué sirve la función `main()` en C?**  
✅ Es el **punto de entrada** de un programa en C. Todo programa debe tener una función `main()` desde donde inicia su ejecución.  

```c
int main() {
    printf("¡Hola, mundo!\n");
    return 0;
}
```

**5️⃣ ¿Qué es una variable en C?**  
✅ Es un espacio en memoria con un nombre asignado que almacena un valor.  

```c
int edad = 25; // Variable de tipo entero
float precio = 19.99; // Variable de tipo flotante
```

---

### **Sección 2: Tipos de Datos y Operadores**
**6️⃣ ¿Cuáles son los principales tipos de datos en C?**  
✅ Los tipos básicos incluyen:  

| Tipo        | Descripción            |
|------------|------------------------|
| `int`      | Entero                 |
| `float`    | Decimal de precisión simple |
| `double`   | Decimal de doble precisión |
| `char`     | Un solo caracter        |
| `bool`     | Booleano (`true/false`) |

**7️⃣ ¿Qué es un operador en C?**  
✅ Son símbolos que permiten realizar cálculos y manipulación de datos.  

| Tipo      | Ejemplos      |
|-----------|--------------|
| Aritméticos | `+`, `-`, `*`, `/`, `%` |
| Relacionales | `==`, `!=`, `>`, `<` |
| Lógicos | `&&`, `||`, `!` |

```c
int a = 10, b = 5;
printf("%d\n", a + b); // Resultado: 15
```

---

### **Sección 3: Estructuras de Control**
**8️⃣ ¿Cuáles son las estructuras de control en C?**  
✅ Se utilizan para modificar el flujo de ejecución:  
✔ **Condicionales (`if`, `else`, `switch`)**  
✔ **Bucles (`for`, `while`, `do-while`)**  

```c
if (edad >= 18) {
    printf("Eres mayor de edad");
} else {
    printf("Eres menor de edad");
}
```

**9️⃣ ¿Cuál es la diferencia entre `while`, `for` y `do-while`?**  
✅ **`for`**: Se usa cuando conocemos la cantidad exacta de iteraciones.  
✅ **`while`**: Se ejecuta mientras una condición sea verdadera.  
✅ **`do-while`**: Similar a `while`, pero ejecuta al menos una vez.  

```c
int i = 1;
while (i <= 5) {
    printf("%d ", i);
    i++;
}
```

---

### **Sección 4: Manejo de Memoria y Punteros**
**🔟 ¿Qué es un puntero en C y para qué se usa?**  
✅ Es una variable que almacena la dirección de otra variable. Se usa para manipulación eficiente de memoria y estructuras avanzadas.  

```c
int a = 10;
int *ptr = &a; // Puntero que apunta a la dirección de 'a'
printf("%d\n", *ptr); // Desreferenciar: muestra el valor de 'a'
```

**1️⃣1️⃣ ¿Qué diferencia hay entre `malloc()` y `free()` en C?**  
✅ **`malloc()`**: Asigna memoria dinámicamente.  
✅ **`free()`**: Libera la memoria asignada para evitar fugas.  

```c
int *ptr = (int *)malloc(sizeof(int) * 5); // Reservar memoria para 5 enteros
free(ptr); // Liberar la memoria
```

---

### **Sección 5: Estructuras de Datos**
**1️⃣2️⃣ ¿Qué es un array en C y cómo se usa?**  
✅ Un **array** es una estructura que permite almacenar múltiples valores del mismo tipo.  

```c
int numeros[] = {10, 20, 30, 40, 50};
printf("Primer elemento: %d\n", numeros[0]); // Accede a un elemento
```

**1️⃣3️⃣ ¿Qué es una estructura (`struct`) en C?**  
✅ Permite agrupar distintos tipos de datos en una única entidad.  

```c
struct Persona {
    char nombre[50];
    int edad;
};

struct Persona p1 = {"Juan", 25};
printf("Nombre: %s, Edad: %d\n", p1.nombre, p1.edad);
```

---

### **Sección 6: Funciones en C**
**1️⃣4️⃣ ¿Qué es una función en C y por qué es útil?**  
✅ Una función permite reutilizar código y mejorar la organización.  

```c
int suma(int a, int b) {
    return a + b;
}
```

**1️⃣5️⃣ ¿Qué es una función recursiva?**  
✅ Es una función que se llama a sí misma.  

```c
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
```

---

### **Sección 7: Algoritmos y Ordenación**
**1️⃣6️⃣ ¿Cómo funciona el algoritmo de búsqueda binaria en C?**  
✅ Divide el arreglo en mitades hasta encontrar el valor deseado.  

```c
int busquedaBinaria(int arr[], int izquierda, int derecha, int objetivo) {
    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        if (arr[medio] == objetivo) return medio;
        if (arr[medio] < objetivo) izquierda = medio + 1;
        else derecha = medio - 1;
    }
    return -1;
}
```

**1️⃣7️⃣ ¿Qué es el ordenamiento burbuja?**  
✅ Ordena elementos comparando e intercambiando valores adyacentes.  

```c
void ordenamientoBurbuja(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
```

---

