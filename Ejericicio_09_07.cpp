// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 10/11/2024
// Número de ejercicio: 7
// Problema planteado: Realizar un algoritmo para generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28,.. para n términos.
#include <iostream>
#include <vector>
using namespace std;

void generarSecuencia(int n, int actual, int anterior, int incremento, vector<int>& secuencia) 
{
    if (n == 0) 
    {
        return;
    }
    secuencia.push_back(actual);
    if (actual == 1 || actual == 2 || actual == 4 || actual == 8 || actual == 16) 
    {
        generarSecuencia(n - 1, actual * 2, actual, incremento, secuencia);
    } else 
    {
        generarSecuencia(n - 1, actual + incremento, actual, incremento + 3, secuencia);
    }
}
int main() 
{
    int n;
    cout << "Introduce el número de términos que deseas generar: ";
    cin >> n;
    vector<int> secuencia;
    generarSecuencia(n, 1, 1, 7, secuencia);
    cout << "La secuencia generada es: ";
    for (int i = 0; i < secuencia.size(); i++) 
    {
        cout << secuencia[i] << " ";
    }
    cout << endl;
    return 0;
}
