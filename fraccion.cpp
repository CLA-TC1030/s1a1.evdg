#include "fraccion.hpp"
#include <iostream>
#include <cstdlib>

fraccion::fraccion() : n{0}, d{1}
{}

fraccion::fraccion(int n, int d)
{
    
}

int fraccion::getN()
{
    return 0;
}

int fraccion::getD()
{
    return 1;
}

void fraccion::setN(int n)
{
    
}

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

fraccion fraccion::suma(fraccion f)
{
    return fraccion();
}

fraccion fraccion::multiplica(fraccion f)
{
    return fraccion();
}

bool fraccion::igualA(fraccion f)
{
    return true;
}

void fraccion::imprime()
{
    std::cout << getN() << "/" << getD();
}