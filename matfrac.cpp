#include "fraccion.hpp"
#include "matfrac.hpp"
#include <iostream>

// Construye una Matriz de Fracciones de nxm con puros 0/1 --------
matfrac::matfrac(int n, int m)
{
    
}

// Construye una Matriz de Fracciones leyendo de los archivos mX.f ---
matfrac::matfrac(std::string amf) {

    
}

//Almacena en el renglon r y columna c una fraccion f
void matfrac::setA(int r, int c, fraccion f)
{
     
}

//Consulta la fracción del renglon r y columna c 
fraccion matfrac::getA(int r, int c)
{
     return fraccion{};
}

int matfrac::getn()
{
    return 0;
}
int matfrac::getm()
{
    return 0;
}

//Suma dos matrices ------------------------------------------
matfrac matfrac::suma(matfrac m2)
{
     
     return matfrac{0,0};
}

//Compara dos matrices------------------------------
bool matfrac::igualA(matfrac mf)
{
     return true;
}

//Compara las dimensiones de dos matrices ----------
bool matfrac::igualDimensionA(matfrac mf)
{
    return true;
}

//Imprime la matriz actual igual a como se muestra en los archivos ----
void matfrac::imprime()
{
    
}
