/*
Nombre: ejercicio0656.cpp
Titulo: Suma diagonal matriz NxN
Nivel: Intermedio
Descripcion: Programa de ejemplo con solución completa.
*/

// Ejemplo de entrada: (usa stdin). Archivo generado automáticamente.

// Ejercicio: Sumar diagonal principal de matriz NxN
#include <iostream>
using namespace std;
int main(){ int N; if(!(cin>>N)) return 0; int mat[N][N]; long long s=0; for(int i=0;i<N;i++) for(int j=0;j<N;j++){ cin>>mat[i][j]; if(i==j) s+=mat[i][j]; } cout<<s<<"\n"; return 0; }
