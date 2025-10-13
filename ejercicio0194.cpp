/*
Nombre: ejercicio0194.cpp
Titulo: Suma pares 1..N
Nivel: Intermedio
Descripcion: Programa de ejemplo con solución completa.
*/

// Ejemplo de entrada: (usa stdin). Archivo generado automáticamente.

// Ejercicio: Sumar números pares de 1 a N
#include <iostream>
using namespace std;
int main(){ long long N,s=0; if(!(cin>>N)) return 0; for(long long i=2;i<=N;i+=2) s+=i; cout<<s<<"\n"; return 0; }
