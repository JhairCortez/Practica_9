// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 10/11/2024
// Número de ejercicio: 5
// Problema planteado: Implementa una función recursiva que devuelva el enésimo número en la
secuencia de Fibonacci
#include <iostream>
using namespace std;

int fibonacci(int n) 
{
    if (n == 0) 
    {
        return 0;
    }
    if (n == 1) 
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
    int n;
    cout << "Introduce el valor de n para obtener el enésimo número de Fibonacci: ";
    cin >> n;
    cout << "El número en la posición " << n << " de la secuencia de Fibonacci es: " << fibonacci(n) << endl;
    return 0;
}
