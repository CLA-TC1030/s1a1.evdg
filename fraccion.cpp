#include "fraccion.hpp"

// Construye una fracción inicial como 0/1
fraccion::fraccion() : n{0}, d{1}
{}

// Construye la fracción actual con numerador 'n' y denominador 'd'

// Consulta el numerador de la fracción actual

// Consulta el denominador de la fracción actual

// Asigna valor al numerador

// Asigna valor al denominador

// Calcula el MCD usando el algoritmo de Euclides ------
int fraccion::mcd()
{
    int u=abs(n);
    int v=abs(d);
    if(v==0){
          return u;
    }
     int r;
     while(v!=0){
          r=u%v;
          u=v;
          v=r;
     }
     return u;
}

// Simplifica la fracción ---------------------


// Suma una fracción a la fraccion actual, devuelve la suma de ambas fracciones


// Multiplica una fracción a la fraccion actual, devuelve la multiplicación de ambas fracciones


// Compara la fraccion actual con otra, decide si son o no equivalentes


// Muestra en consola fraccion actual
