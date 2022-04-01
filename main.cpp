/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;

int n, numero, acomulador, promedio;

int main()
{
    
    
    cout << "Ingrese la cantidad de numeros: " ;
    cin >> n  ;
    
    acomulador = 0;
    
    for (int i = 0; i < n; i++){
        cout << "Ingrese el numero: " ;
        cin >> numero;
        acomulador = acomulador + numero;
    }
    
    promedio = acomulador / n;
    cout << "El valor acumulado es: " << acomulador << endl ;
    
    cout << "El valor promedio es: " << promedio;

    return 0;
}

