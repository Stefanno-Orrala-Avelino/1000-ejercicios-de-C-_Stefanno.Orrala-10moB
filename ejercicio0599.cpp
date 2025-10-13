/*
Nombre: ejercicio0599.cpp
Titulo: Palíndromo
Nivel: Intermedio
Descripcion: Programa de ejemplo con solución completa.
*/

// Ejemplo de entrada: (usa stdin). Archivo generado automáticamente.

// Ejercicio: Verificar si cadena es palíndromo
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){ string s; getline(cin,s); string t=s; reverse(t.begin(),t.end()); cout<<(s==t ? "SI":"NO")<<"\n"; return 0; }
