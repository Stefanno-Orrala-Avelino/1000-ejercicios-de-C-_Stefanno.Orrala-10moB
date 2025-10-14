/*
Nombre: ejercicio0748.cpp
Titulo: Clase Rectángulo
Nivel: Intermedio
Descripcion: Programa de ejemplo con solución completa.
*/

// Ejemplo de entrada: (usa stdin). Archivo generado automáticamente.

// Ejercicio: Clase Rectángulo con área y perímetro
#include <iostream>
using namespace std;
class Rectangulo{
public:
    double ancho, alto;
    Rectangulo(double a=0,double b=0): ancho(a), alto(b) {}
    double area(){ return ancho*alto; }
    double perimetro(){ return 2*(ancho+alto); }
};
int main(){ double a,b; if(!(cin>>a>>b)) return 0; Rectangulo r(a,b); cout<<r.area()<<" "<<r.perimetro()<<"\n"; return 0; }
