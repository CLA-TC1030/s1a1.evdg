#include "fraccion.hpp"
#include <iostream>
#include <cstdlib>

// Construye una fracción inicial como 0/1
fraccion::fraccion() : n{0}, d{1}
{}

// Construye la fracción actual con numerador 'n' y denominador 'd'
fraccion::fraccion(int n, int d)
{
    
}

// Consulta el numerador de la fracción actual
int fraccion::getN()
{
    return 0;
}

// Consulta el denominador de la fracción actual
int fraccion::getD()
{
    return 1;
}

// Asigna valor al numerador
void fraccion::setN(int n)
{
    
}

// Asigna valor al denominador
void fraccion::setD(int d)
{
    
}

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
void fraccion::simplifica()
{
    int dividir=mcd();

    n/=dividir;
    d/=dividir;
}

// Suma una fracción a la fraccion actual, devuelve la suma de ambas fracciones
fraccion fraccion::suma(fraccion f)
{
    return fraccion();
}

// Multiplica una fracción a la fraccion actual, devuelve la multiplicación de ambas fracciones
fraccion fraccion::multiplica(fraccion f)
{
    return fraccion();
}

// Compara la fraccion actual con otra, decide si son o no equivalentes
bool fraccion::igualA(fraccion f)
{
    return true;
}

// Muestra en consola fraccion actual
void fraccion::imprime()
{
    std::cout << "0/0";
}