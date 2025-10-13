/*
Nombre: ejercicio0242.cpp
Titulo: MCM de dos números
Nivel: Intermedio
Descripcion: Programa de ejemplo con solución completa.
*/

// Ejemplo de entrada: (usa stdin). Archivo generado automáticamente.

// Ejercicio: Calcular MCM de dos números
#include <iostream>
using namespace std;
int mcd(int a,int b){ while(b){ int t=b; b=a%b; a=t;} return a; }
int main(){ int x,y; if(!(cin>>x>>y)) return 0; cout<<x*y/mcd(x,y)<<"\n"; return 0; }
