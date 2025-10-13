/*
Nombre: ejercicio0517.cpp
Titulo: Cuenta palabras en cadena
Nivel: Intermedio
Descripcion: Programa de ejemplo con solución completa.
*/

// Ejemplo de entrada: (usa stdin). Archivo generado automáticamente.

// Ejercicio: Contar palabras en cadena
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){ string line; getline(cin,line); istringstream ss(line); string w; int c=0; while(ss>>w) c++; cout<<c<<"\n"; return 0; }
