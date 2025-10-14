/*
Nombre: ejercicio0635.cpp
Titulo: Invertir número
Nivel: Intermedio
Descripcion: Programa de ejemplo con solución completa.
*/

// Ejemplo de entrada: (usa stdin). Archivo generado automáticamente.

// Ejercicio: Invertir número
#include <iostream>
using namespace std;
int main(){ long long n,rev=0; if(!(cin>>n)) return 0; while(n){ rev=rev*10+n%10; n/=10;} cout<<rev<<"\n"; return 0; }
