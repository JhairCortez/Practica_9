// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 10/11/2024
// Número de ejercicio: 10
// Problema planteado: Realizar un algoritmo recursivo para la siguiente función
#include <iostream>
using namespace std;

int sumaCuadrados(int n) 
{
    if (n == 1) 
    {
        return 1;
    }
    return n * n + sumaCuadrados(n - 1);
}
int main() 
{
    int n;
    cout << "Introduce el valor de n: ";
    cin >> n;
    cout << "La suma de los cuadrados de los primeros " << n << " números es: " << sumaCuadrados(n) << endl;
    return 0;
}
