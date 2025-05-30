#include <stdio.h>
#include <string.h>

#define MAX_ESTUDIANTES 100

struct Estudiante {
    int numeroInscripcion;
    char nombre[50];
    int edad;
};

// Función para cargar estudiantes
void cargarEstudiantes(struct Estudiante estudiantes[], int *n) {
    printf("Ingrese el número de estudiantes: ");
    scanf("%d", n);
    getchar(); // Limpiar buffer

    for (int i = 0; i < *n; i++) {
        printf("\nEstudiante %d:\n", i + 1);
        printf("Número de inscripción: ");
        scanf("%d", &estudiantes[i].numeroInscripcion);
        getchar(); // Limpiar buffer
        
        printf("Nombre: ");
        fgets(estudiantes[i].nombre, sizeof(estudiantes[i].nombre), stdin);
        estudiantes[i].nombre[strcspn(estudiantes[i].nombre, "\n")] = '\0'; // Eliminar salto de línea

        printf("Edad: ");
        scanf("%d", &estudiantes[i].edad);
    }
}

// Función de ordenamiento burbuja
void ordenamientoBurbuja(struct Estudiante estudiantes[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (estudiantes[j].numeroInscripcion > estudiantes[j + 1].numeroInscripcion) {
                struct Estudiante temp = estudiantes[j];
                estudiantes[j] = estudiantes[j + 1];
                estudiantes[j + 1] = temp;
            }
        }
    }
}

// Función de búsqueda binaria
int buscarEstudiante(struct Estudiante estudiantes[], int n, int numero) {
    int izquierda = 0, derecha = n - 1;

    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        if (estudiantes[medio].numeroInscripcion == numero) return medio;
        if (estudiantes[medio].numeroInscripcion < numero) izquierda = medio + 1;
        else derecha = medio - 1;
    }

    return -1; // Estudiante no encontrado
}

// Función para ingresar y buscar un estudiante por número de inscripción
void ingresarNumeroEstudiante(struct Estudiante estudiantes[], int n) {
    int numero;
    printf("\nIngrese el número de inscripción a buscar: ");
    scanf("%d", &numero);

    int indice = buscarEstudiante(estudiantes, n, numero);
    if (indice != -1) {
        printf("\nEstudiante encontrado:\n");
        printf("Número de inscripción: %d\n", estudiantes[indice].numeroInscripcion);
        printf("Nombre: %s\n", estudiantes[indice].nombre);
        printf("Edad: %d\n", estudiantes[indice].edad);
    } else {
        printf("\nEstudiante no encontrado.\n");
    }
}

// Función para mostrar la lista de estudiantes en formato tabular
void mostrarEstudiantes(struct Estudiante estudiantes[], int n) {
    printf("\nLista de estudiantes:\n");
    printf("----------------------------------------------\n");
    printf("| %-15s | %-30s | %-5s |\n", "Inscripción", "Nombre", "Edad");
    printf("----------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("| %-15d | %-30s | %-5d |\n", estudiantes[i].numeroInscripcion, estudiantes[i].nombre, estudiantes[i].edad);
    }
    printf("----------------------------------------------\n");
}

int main() {
    struct Estudiante estudiantes[MAX_ESTUDIANTES];
    int n;

    cargarEstudiantes(estudiantes, &n);
    ordenamientoBurbuja(estudiantes, n);
    ingresarNumeroEstudiante(estudiantes, n);
    mostrarEstudiantes(estudiantes, n);

    return 0;
}