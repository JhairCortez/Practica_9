// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 10/11/2024
// Número de ejercicio: 2
// Problema planteado: Implementa una función recursiva para calcular la potencia de un número
#include <iostream>
using namespace std;

int potencia(int a, int n) 
{
    if (n == 0) 
    {
        return 1;
    }
    return a * potencia(a, n - 1);
}

int main() 
{
    int base, exponente;
    cout << "Introduce la base: ";
    cin >> base;
    cout << "Introduce el exponente: ";
    cin >> exponente;
    cout << "El resultado de " << base << "^" << exponente << " es: " << potencia(base, exponente) << endl;
    return 0;
}
