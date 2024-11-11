// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 10/11/2024
// Número de ejercicio: 3
// Problema planteado: Crea una función recursiva que reciba una cadena y devuelva la misma
cadena invertida
#include <iostream>
#include <string>
using namespace std;

string invertirCadena(const string& str) 
{
    if (str.empty()) 
    {
        return "";
    }
    return str.back() + invertirCadena(str.substr(0, str.size() - 1));
}

int main() 
{
    string cadena;
    cout << "Introduce una cadena: ";
    cin >> cadena;
    cout << "La cadena invertida es: " << invertirCadena(cadena) << endl;
    return 0;
}
