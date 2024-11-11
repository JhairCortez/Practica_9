// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 10/11/2024
// Número de ejercicio: 8
// Problema planteado: Realizar un algoritmo recursivo, dado un vector de números enteros,
retorne la suma de sus elementos
#include <iostream>
#include <vector>
using namespace std;

int sumaVector(const vector<int>& vec, int indice = 0) 
{
    // Caso base: cuando hemos llegado al final del vector
    if (indice == vec.size()) 
    {
        return 0;
    }
    return vec[indice] + sumaVector(vec, indice + 1);
}
int main() 
{
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "La suma de los elementos del vector es: " << sumaVector(vec) << endl;
    return 0;
}
