#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTOS 100

struct Producto {
    int numero;
    char nombre[50];
    int cantidad;
};

// Función para cargar productos
void cargarProductos(struct Producto productos[], int *n) {
    printf("Ingrese el número de productos: ");
    scanf("%d", n);
    getchar(); // Limpiar buffer

    for (int i = 0; i < *n; i++) {
        printf("\nProducto %d:\n", i + 1);
        printf("Número: ");
        scanf("%d", &productos[i].numero);
        getchar(); // Limpiar buffer
        
        printf("Nombre: ");
        fgets(productos[i].nombre, sizeof(productos[i].nombre), stdin);
        productos[i].nombre[strcspn(productos[i].nombre, "\n")] = '\0'; // Eliminar salto de línea

        printf("Cantidad en stock: ");
        scanf("%d", &productos[i].cantidad);
    }
}

// Función de ordenamiento burbuja
void ordenamientoBurbuja(struct Producto productos[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (productos[j].numero > productos[j + 1].numero) {
                struct Producto temp = productos[j];
                productos[j] = productos[j + 1];
                productos[j + 1] = temp;
            }
        }
    }
}

// Función de búsqueda binaria
int buscarProducto(struct Producto productos[], int n, int numero) {
    int izquierda = 0, derecha = n - 1;

    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        if (productos[medio].numero == numero) return medio;
        if (productos[medio].numero < numero) izquierda = medio + 1;
        else derecha = medio - 1;
    }

    return -1; // Producto no encontrado
}

// Función para ingresar y buscar un número de producto
void ingresarNumeroProducto(struct Producto productos[], int n) {
    int numero;
    printf("\nIngrese el número de producto a buscar: ");
    scanf("%d", &numero);

    int indice = buscarProducto(productos, n, numero);
    if (indice != -1) {
        printf("\nProducto encontrado:\n");
        printf("Número: %d\n", productos[indice].numero);
        printf("Nombre: %s\n", productos[indice].nombre);
        printf("Cantidad en stock: %d\n", productos[indice].cantidad);
    } else {
        printf("\nProducto no encontrado.\n");
    }
}

// Función para mostrar los productos en formato tabular
void mostrarProductos(struct Producto productos[], int n) {
    printf("\nLista de productos:\n");
    printf("----------------------------------------------\n");
    printf("| %-10s | %-30s | %-10s |\n", "Número", "Nombre", "Cantidad");
    printf("----------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("| %-10d | %-30s | %-10d |\n", productos[i].numero, productos[i].nombre, productos[i].cantidad);
    }
    printf("----------------------------------------------\n");
}

int main() {
    struct Producto productos[MAX_PRODUCTOS];
    int n;

    cargarProductos(productos, &n);
    ordenamientoBurbuja(productos, n);
    ingresarNumeroProducto(productos, n);
    mostrarProductos(productos, n);

    return 0;
}