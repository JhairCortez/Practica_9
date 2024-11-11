// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 10/11/2024
// Número de ejercicio: 1
// Problema planteado: Escribe una función recursiva que reciba un número entero positivo y
devuelva la suma de sus dígitos
#include <iostream>
using namespace std;

int sumaDeDigitos(int n) 
{
    if (n == 0) 
    {
        return 0;
    }
    return (n % 10) + sumaDeDigitos(n / 10);
}

int main() 
{
    int numero;
    cout << "Introduce un numero entero positivo: ";
    cin >> numero;
    cout << "La suma de los digitos es: " << sumaDeDigitos(numero) << endl;
    return 0;
}
