// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 10/11/2024
// Número de ejercicio: 12
// Problema planteado: Realizar un algoritmo recursivo para calcular el coeficiente binomial a
partir de la lectura de dos números enteros, a partir de la relación:
#include <iostream>
using namespace std;

int factorial(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int coeficienteBinomial(int n, int m) 
{
    int factorial_n = factorial(n);
    int factorial_m = factorial(m);
    int factorial_n_m = factorial(n - m);
    return factorial_n / (factorial_m * factorial_n_m);
}

int main() 
{
    int n, m;
    cout << "Introduce el valor de n: ";
    cin >> n;
    cout << "Introduce el valor de m: ";
    cin >> m;
    cout << "El coeficiente binomial C(" << n << ", " << m << ") es: " << coeficienteBinomial(n, m) << endl;
    return 0;
}
