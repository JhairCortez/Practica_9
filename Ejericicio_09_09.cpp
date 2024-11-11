// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 10/11/2024
// Número de ejercicio: 9
// Problema planteado: Realizar un algoritmo recursivo para comparar si dos vectores son iguales
#include <iostream>
#include <vector>
using namespace std;

bool sonIguales(const vector<int>& vec1, const vector<int>& vec2, int indice = 0) 
{
    // Caso base: Si hemos comparado todos los elementos y los vectores tienen el mismo tamaño
    if (indice == vec1.size() && indice == vec2.size()) 
    {
        return true;
    }
    if (indice == vec1.size() || indice == vec2.size()) 
    {
        return false;
    }
    if (vec1[indice] != vec2[indice]) 
    {
        return false;
    }
    return sonIguales(vec1, vec2, indice + 1);
}

int main() {
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2 = {1, 2, 3, 4, 5};
    vector<int> vec3 = {1, 2, 3, 4, 6};
    if (sonIguales(vec1, vec2)) 
    {
        cout << "Los vectores vec1 y vec2 son iguales." << endl;
    } else 
    {
        cout << "Los vectores vec1 y vec2 no son iguales." << endl;
    }
    if (sonIguales(vec1, vec3)) 
    {
        cout << "Los vectores vec1 y vec3 son iguales." << endl;
    } else 
    {
        cout << "Los vectores vec1 y vec3 no son iguales." << endl;
    }
    return 0;
}
