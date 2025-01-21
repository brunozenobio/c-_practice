# Ejercicios de Práctica en C++

Este documento contiene ejercicios para practicar C++ moderno. Se asume que tienes experiencia previa con Python y conoces los conceptos básicos de programación como condicionales, bucles y funciones.

---

## 1. Estructuras Básicas

### **Ejercicio 1: Cálculo de números primos**
Escribe un programa que determine si un número ingresado por el usuario es primo.

**Instrucciones:**
1. Crea una función llamada `esPrimo` que reciba un entero y devuelva `true` si el número es primo.
2. Usa un bucle `for` para verificar los divisores del número.
3. Llama a la función desde `main` y muestra el resultado.

**Pista:** Un número primo es divisible únicamente por 1 y por sí mismo.

---

### **Ejercicio 2: Tablas de multiplicar**
Crea un programa que imprima las tablas de multiplicar del 1 al 10.

**Instrucciones:**
1. Usa dos bucles `for` anidados: uno para iterar sobre los números base (1 al 10) y otro para multiplicar.
2. Formatea la salida para que las tablas se vean alineadas.

---

## 2. Manejo de Clases y Objetos

### **Introducción a Clases y Objetos**
Las clases en C++ se declaran con la palabra clave `class`. Los métodos son funciones dentro de la clase y suelen estar acompañados de modificadores de acceso (`public`, `private`, `protected`).

**Ejemplo básico:**
```cpp
class Persona {
private:
    std::string nombre;
    int edad;

public:
    Persona(std::string n, int e) : nombre(n), edad(e) {}

    void saludar() {
        std::cout << "Hola, soy " << nombre << " y tengo " << edad << " años." << std::endl;
    }
};
```

### **Ejercicio 3: Clase Rectángulo**
Crea una clase `Rectangulo` que calcule áreas y perímetros.

**Instrucciones:**
1. Declara dos atributos privados: `ancho` y `alto`.
2. Crea un constructor que inicialice estos valores.
3. Escribe métodos públicos:
   - `calcularArea`: Devuelve el área.
   - `calcularPerimetro`: Devuelve el perímetro.
4. En el `main`, crea un objeto `Rectangulo` y muestra sus propiedades.

---

## 3. Punteros y Memoria Dinámica

### **Introducción a Punteros**
Los punteros almacenan la dirección de memoria de una variable. Se declaran con el símbolo `*`.

**Ejemplo básico:**
```cpp
int x = 10;
int* ptr = &x; // ptr almacena la dirección de x
std::cout << *ptr; // Imprime el valor de x (10)
```

### **Ejercicio 4: Intercambiar Valores con Punteros**
Crea una función que intercambie dos valores enteros usando punteros.

**Instrucciones:**
1. Define una función `intercambiar(int* a, int* b)`.
2. Usa una variable temporal para realizar el intercambio.
3. Prueba la función desde `main`.

---

## 4. Manejo de Archivos

### **Ejercicio 5: Escribir y Leer Archivos**
Crea un programa que escriba datos en un archivo y luego los lea.

**Instrucciones:**
1. Usa la biblioteca `fstream`.
2. Escribe un programa que:
   - Solicite al usuario su nombre y edad.
   - Guarde estos datos en un archivo llamado `datos.txt`.
   - Lea los datos desde el archivo y los muestre en consola.

---

## 5. STL (Standard Template Library)

### **Ejercicio 6: Uso de `std::vector`**
Crea un programa que almacene números en un `std::vector` y calcule el promedio.

**Instrucciones:**
1. Declara un `std::vector<int>`.
2. Solicita al usuario 5 números y agrégalos al vector.
3. Calcula y muestra el promedio.

---

## 6. Programación Concurrente

### **Introducción a Hilos (`std::thread`)**
La biblioteca `<thread>` permite ejecutar tareas en paralelo.

**Ejemplo básico:**
```cpp
#include <thread>
#include <iostream>

void tarea() {
    std::cout << "Hilo en ejecución" << std::endl;
}

int main() {
    std::thread t(tarea);
    t.join();
    return 0;
}
```

### **Ejercicio 7: Suma en Paralelo**
Crea un programa que sume los elementos de un arreglo en dos hilos.

**Instrucciones:**
1. Divide el arreglo en dos partes iguales.
2. Crea dos hilos que calculen la suma de cada parte.
3. Combina los resultados y móstralos en pantalla.

---

## 7. Bonus: Desafío Final

### **Ejercicio 8: Sistema de Inventario**
Crea un programa que maneje un sistema de inventario básico usando una clase `Producto`.

**Instrucciones:**
1. Define la clase `Producto` con:
   - Atributos: `nombre`, `cantidad`, `precio`.
   - Métodos para agregar o quitar inventario y mostrar detalles del producto.
2. Usa un `std::vector` para almacenar varios productos.
3. En el `main`, permite al usuario:
   - Agregar un nuevo producto.
   - Modificar la cantidad de un producto existente.
   - Listar todos los productos.

---

¡Practica cada uno de estos ejercicios para dominar C++ moderno! Si necesitas ejemplos específicos o ayuda con la implementación, no dudes en pedírmelo. ¡Buena suerte!

