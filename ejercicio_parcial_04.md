### **Ejercicio de Parcial - Análisis de Textos**
#### **Consigna:**
Desarrollar un programa en **C** que permita al usuario analizar un párrafo ingresado y aplicar diversas operaciones sobre **strings**. El programa deberá cumplir las siguientes funciones:

1. **Ingresar un párrafo** de hasta **300 caracteres** y almacenarlo en un arreglo de caracteres.  
2. **Contar la cantidad de caracteres y la cantidad de palabras en el párrafo**.  
3. **Contar la frecuencia de cada vocal (`a, e, i, o, u`) en el texto**.  
4. **Detectar cuántas veces aparece una palabra específica en el párrafo** ingresado por el usuario.  
5. **Eliminar una palabra específica del párrafo y mostrar el texto modificado**.  

---

### **Ejemplo de entrada esperada**
El usuario ingresará un párrafo en este formato:

```
Ingrese un párrafo: "El sol brilla en el cielo azul. El viento sopla fuerte."
```

Luego, el programa podrá realizar las siguientes acciones:

```
Cantidad de caracteres: 52
Cantidad de palabras: 10
Frecuencia de vocales:
   - a: 3
   - e: 6
   - i: 3
   - o: 4
   - u: 2
Ingrese una palabra para buscar: "El"
La palabra "El" aparece 3 veces.
Ingrese una palabra para eliminar: "El"
Texto modificado: "sol brilla en cielo azul. viento sopla fuerte."
```

---

### **Objetivo del ejercicio**
Este ejercicio permite practicar el **manejo de strings en C**, aplicando:
- **`strlen()`** para contar caracteres.
- **`strtok()`** para dividir el párrafo en palabras.
- **Uso de bucles** para contar frecuencias de caracteres y palabras.
- **Manejo de strings dinámico**, eliminando palabras del texto.

---
