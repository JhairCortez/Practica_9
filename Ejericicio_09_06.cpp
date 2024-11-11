// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 10/11/2024
// Número de ejercicio: 6
// Problema planteado: Realizar un algoritmo recursivo para calcular el máximo común divisor de
dos números enteros aplicando el algoritmo de Euclides
#include <iostream>
using namespace std;

int mcd(int a, int b) 
{
    if (b == 0) 
    {
        return a;
    }
    return mcd(b, a % b);
}
int main() 
{
    int a, b;
    cout << "Introduce el primer numero: ";
    cin >> a;
    cout << "Introduce el segundo numero: ";
    cin >> b;
    cout << "El máximo común divisor de " << a << " y " << b << " es: " << mcd(a, b) << endl;
    return 0;
}
