// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 10/11/2024
// Número de ejercicio: 14
// Problema planteado: Realizar un algoritmo recursivo para elaborar un programa en el que dado
un entero n > 1, calcule e imprima los elementos correspondientes a la
conjetura de Ullman
#include <iostream>
using namespace std;

void conjeturaUllman(int n) 
{
    cout << n << " ";
    if (n == 1) 
    {
        return;
    }
    if (n % 2 == 0) 
    {
        conjeturaUllman(n / 2);
    } 
    else 
    {
        conjeturaUllman(3 * n + 1);
    }
}

int main() 
{
    int n;
    cout << "Introduce un número entero mayor que 1: ";
    cin >> n;
    if (n <= 1) 
    {
        cout << "El número debe ser mayor que 1." << endl;
        return 1;
    }
    cout << "Secuencia de la conjetura de Ullman para n = " << n << ": ";
    conjeturaUllman(n);
    cout << endl;
    return 0;
}
