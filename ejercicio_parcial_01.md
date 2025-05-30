### **Ejercicio de Parcial - Gestión de Inventario con Búsqueda Binaria y Ordenamiento Burbuja**
**Consigna:**  
Se requiere desarrollar un programa en **C** que administre un inventario de productos de una tienda. El programa debe permitir la búsqueda eficiente de productos utilizando el **algoritmo de búsqueda binaria**, pero **el ordenamiento del listado de productos deberá realizarse mediante el algoritmo de Ordenamiento Burbuja**.

Para ello, se solicita implementar las siguientes funciones:

1. **Cargar productos en un arreglo de estructuras.**  
   Cada producto debe contener los siguientes datos:
   - **Número de producto (ID único).**
   - **Nombre del producto.**
   - **Cantidad disponible en stock.**

2. **Ordenar los productos por número de producto (ID) utilizando el algoritmo de **Ordenamiento Burbuja** antes de ejecutar la búsqueda binaria.**  
   Este paso es obligatorio, ya que la búsqueda binaria requiere un conjunto ordenado previamente.

3. **Permitir al usuario ingresar un número de producto** y buscarlo mediante **búsqueda binaria**.  
   - Si el producto existe, mostrar todos sus datos.
   - Si el producto no existe, indicar que no fue encontrado.

4. **Mostrar la lista completa de productos en formato tabular** luego de que la ordenación haya sido realizada.

---

### **Ejemplo de entrada esperada**
El usuario ingresará los productos en este formato:

```
Ingrese el número de productos: 5
Producto 1:
Número: 101
Nombre: Laptop
Cantidad en stock: 12

Producto 2:
Número: 202
Nombre: Teclado
Cantidad en stock: 25

Producto 3:
Número: 303
Nombre: Mouse
Cantidad en stock: 50
...
```

Luego, al ingresar un número de producto para buscar, el sistema usará **búsqueda binaria** para encontrar el producto en la lista ordenada con **Ordenamiento Burbuja**.

---

### **Objetivo del ejercicio**
Este problema permite aplicar conceptos clave de **estructuras**, **ordenamiento**, y **búsqueda binaria**, fundamentales en la programación.

---

