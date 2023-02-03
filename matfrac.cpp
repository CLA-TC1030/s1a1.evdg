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

//Consulta el número de renglones de la matriz
int matfrac::getn()
{
    return 0;
}

//Consulta el número de columnas de la matriz
int matfrac::getm()
{
    return 0;
}

// Suma la matriz de fracciones m2 a la  matriz actual
matfrac matfrac::suma(matfrac m2)
{
     
     return matfrac{0,0};
}

//Compara la matriz de fracciones actual con la matriz de fracciones mf
bool matfrac::igualA(matfrac mf)
{
     return true;
}

//Compara las dimensiones de la matriz actual con las dimensiones de la matriz mf
bool matfrac::igualDimensionA(matfrac mf)
{
    return true;
}

//Muestra en consola la matriz actual tal como se muestra en los archivos ----
void matfrac::imprime()
{
    std::cout << "Matriz de fracciones\n";
}
