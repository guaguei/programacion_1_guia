#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LONGITUD 200

// Función para contar palabras en una frase
int contarPalabras(char *frase) {
    int contador = 0;
    char *token = strtok(frase, " ");
    
    while (token != NULL) {
        contador++;
        token = strtok(NULL, " ");
    }
    
    return contador;
}

// Función para encontrar la palabra más larga y la más corta
void encontrarPalabraLargaCorta(char *frase, char *larga, char *corta) {
    char *token = strtok(frase, " ");
    strcpy(larga, token);
    strcpy(corta, token);

    while (token != NULL) {
        if (strlen(token) > strlen(larga)) strcpy(larga, token);
        if (strlen(token) < strlen(corta)) strcpy(corta, token);
        token = strtok(NULL, " ");
    }
}

// Función para invertir la frase
void invertirFrase(char *frase, char *invertida) {
    int len = strlen(frase);
    for (int i = 0; i < len; i++) {
        invertida[i] = frase[len - i - 1];
    }
    invertida[len] = '\0';
}

// Función para verificar si una frase es un palíndromo
int esPalindromo(char *frase) {
    int inicio = 0, fin = strlen(frase) - 1;

    while (inicio < fin) {
        while (!isalnum(frase[inicio]) && inicio < fin) inicio++;
        while (!isalnum(frase[fin]) && inicio < fin) fin--;

        if (tolower(frase[inicio]) != tolower(frase[fin])) return 0;

        inicio++;
        fin--;
    }

    return 1;
}

int main() {
    char frase[MAX_LONGITUD], fraseProcesada[MAX_LONGITUD];
    char palabraLarga[50], palabraCorta[50], fraseInvertida[MAX_LONGITUD];
    
    printf("Ingrese una frase: ");
    fgets(frase, MAX_LONGITUD, stdin);
    frase[strcspn(frase, "\n")] = '\0'; // Eliminar salto de línea

    // Copiar la frase original para evitar modificarla en las funciones
    strcpy(fraseProcesada, frase);
    int cantidadPalabras = contarPalabras(fraseProcesada);

    strcpy(fraseProcesada, frase); // Restaurar la frase para buscar palabras largas/cortas
    encontrarPalabraLargaCorta(fraseProcesada, palabraLarga, palabraCorta);

    invertirFrase(frase, fraseInvertida);
    int palindromo = esPalindromo(frase);

    // Mostrar resultados
    printf("\nCantidad de palabras: %d\n", cantidadPalabras);
    printf("Palabra más larga: %s\n", palabraLarga);
    printf("Palabra más corta: %s\n", palabraCorta);
    printf("Frase invertida: %s\n", fraseInvertida);
    printf("¿Es un palíndromo? %s\n", palindromo ? "Sí" : "No");

    return 0;
}