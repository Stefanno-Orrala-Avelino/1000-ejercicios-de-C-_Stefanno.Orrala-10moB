/*
Nombre: ejercicio0410.cpp
Titulo: Suma elementos pares de array
Nivel: Intermedio
Descripcion: Programa de ejemplo con solución completa.
*/

// Ejemplo de entrada: (usa stdin). Archivo generado automáticamente.

// Ejercicio: Sumar solo elementos pares de un arreglo
#include <iostream>
using namespace std;
int main(){ int N; if(!(cin>>N)) return 0; long long s=0; for(int i=0;i<N;i++){ int x; cin>>x; if(x%2==0) s+=x; } cout<<s<<"\n"; return 0; }
