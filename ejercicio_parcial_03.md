### **Ejercicio de Parcial - Análisis de Frases y Palabras**
#### **Consigna:**
Se requiere desarrollar un programa en **C** que realice el procesamiento de una frase ingresada por el usuario, aplicando diversas operaciones sobre **strings**. El programa debe implementar las siguientes funcionalidades:

1. **Ingresar una frase** de hasta **200 caracteres** y almacenarla en un arreglo de caracteres.  
2. **Contar la cantidad de palabras en la frase.**  
3. **Determinar cuál es la palabra más larga y cuál es la más corta.**  
4. **Invertir la frase ingresada.**  
5. **Verificar si la frase es un palíndromo (se lee igual de adelante hacia atrás).**  

---

### **Ejemplo de entrada esperada**
El usuario ingresará una frase en este formato:

```
Ingrese una frase: "Anita lava la tina"
```

El programa debe analizar la frase y mostrar:

```
Cantidad de palabras: 4
Palabra más larga: "Anita"
Palabra más corta: "la"
Frase invertida: "anit al aval atinA"
¿Es un palíndromo? Sí
```

---

### **Objetivo del ejercicio**
Este problema permite aplicar conceptos clave de **manejo de cadenas en C**, como:
- Uso de **`strlen()`** para determinar la longitud de una palabra.
- Uso de **punteros y `strtok()`** para separar palabras en una cadena.
- Uso de **`strrev()`** (o lógica manual) para invertir cadenas.
- Implementación de lógica para identificar **palabras más largas y cortas**.

---
