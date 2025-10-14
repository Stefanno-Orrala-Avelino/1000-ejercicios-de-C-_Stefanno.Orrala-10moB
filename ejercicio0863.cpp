/*
Nombre: ejercicio0863.cpp
Titulo: Contar dígitos
Nivel: Intermedio
Descripcion: Programa de ejemplo con solución completa.
*/

// Ejemplo de entrada: (usa stdin). Archivo generado automáticamente.

// Ejercicio: Contar dígitos de un número
#include <iostream>
using namespace std;
int main(){ long long n; if(!(cin>>n)) return 0; int c=0; while(n){ c++; n/=10;} cout<<c<<"\n"; return 0; }
