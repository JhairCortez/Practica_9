// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 10/11/2024
// Número de ejercicio: 4
// Problema planteado: Escribe una función recursiva que reciba un vector de enteros y un número
a buscar, y devuelva true si el número se encuentra en el vector o false en
caso contrario
#include <iostream>
#include <vector>
using namespace std;

bool buscarNumero(const vector<int>& vec, int numero, int indice = 0) 
{
    if (indice >= vec.size()) 
    {
        return false;
    }
    if (vec[indice] == numero) 
    {
        return true;
    }
    return buscarNumero(vec, numero, indice + 1);
}

int main() 
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int numero;
    cout << "Introduce el numero a buscar: ";
    cin >> numero;

    if (buscarNumero(vec, numero)) 
    {
        cout << "El numero " << numero << " se encuentra en el vector." << endl;
    } else 
    {
        cout << "El numero " << numero << " no se encuentra en el vector." << endl;
    }

    return 0;
}
