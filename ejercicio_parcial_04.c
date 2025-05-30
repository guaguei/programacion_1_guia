#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LONGITUD 300

// Función para contar caracteres en el párrafo
int contarCaracteres(char *parrafo) {
    return strlen(parrafo);
}

// Función para contar palabras en el párrafo
int contarPalabras(char *parrafo) {
    int contador = 0;
    char copia[MAX_LONGITUD];
    strcpy(copia, parrafo);

    char *token = strtok(copia, " ");
    while (token != NULL) {
        contador++;
        token = strtok(NULL, " ");
    }
    return contador;
}

// Función para contar la frecuencia de cada vocal
void contarVocales(char *parrafo, int *vocales) {
    for (int i = 0; i < strlen(parrafo); i++) {
        char c = tolower(parrafo[i]);
        if (c == 'a') vocales[0]++;
        else if (c == 'e') vocales[1]++;
        else if (c == 'i') vocales[2]++;
        else if (c == 'o') vocales[3]++;
        else if (c == 'u') vocales[4]++;
    }
}

// Función para contar cuántas veces aparece una palabra
int contarOcurrenciasPalabra(char *parrafo, char *palabra) {
    int contador = 0;
    char copia[MAX_LONGITUD];
    strcpy(copia, parrafo);

    char *token = strtok(copia, " ");
    while (token != NULL) {
        if (strcmp(token, palabra) == 0) contador++;
        token = strtok(NULL, " ");
    }
    return contador;
}

// Función para eliminar una palabra del párrafo
void eliminarPalabra(char *parrafo, char *palabra, char *modificado) {
    char copia[MAX_LONGITUD];
    strcpy(copia, parrafo);

    char *token = strtok(copia, " ");
    strcpy(modificado, "");

    while (token != NULL) {
        if (strcmp(token, palabra) != 0) {
            strcat(modificado, token);
            strcat(modificado, " ");
        }
        token = strtok(NULL, " ");
    }
    modificado[strlen(modificado) - 1] = '\0'; // Eliminar espacio final
}

int main() {
    char parrafo[MAX_LONGITUD], palabraBuscar[30], palabraEliminar[30], parrafoModificado[MAX_LONGITUD];
    int vocales[5] = {0}; // Contador de vocales

    // Entrada de datos
    printf("Ingrese un párrafo: ");
    fgets(parrafo, MAX_LONGITUD, stdin);
    parrafo[strcspn(parrafo, "\n")] = '\0'; // Eliminar salto de línea

    // Procesamiento del texto
    int caracteres = contarCaracteres(parrafo);
    int palabras = contarPalabras(parrafo);
    contarVocales(parrafo, vocales);

    // Resultados iniciales
    printf("\nCantidad de caracteres: %d\n", caracteres);
    printf("Cantidad de palabras: %d\n", palabras);
    printf("Frecuencia de vocales:\n");
    printf("   - a: %d\n   - e: %d\n   - i: %d\n   - o: %d\n   - u: %d\n", vocales[0], vocales[1], vocales[2], vocales[3], vocales[4]);

    // Buscar palabra específica
    printf("\nIngrese una palabra para buscar: ");
    scanf("%s", palabraBuscar);
    int ocurrencias = contarOcurrenciasPalabra(parrafo, palabraBuscar);
    printf("La palabra \"%s\" aparece %d veces.\n", palabraBuscar, ocurrencias);

    // Eliminar palabra específica
    printf("\nIngrese una palabra para eliminar: ");
    scanf("%s", palabraEliminar);
    eliminarPalabra(parrafo, palabraEliminar, parrafoModificado);
    printf("Texto modificado: \"%s\"\n", parrafoModificado);

    return 0;
}