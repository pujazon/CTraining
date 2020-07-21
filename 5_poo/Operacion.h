#ifndef OP_H
#define OP_H

using namespace std;
#include <iostream>
#include <stdio.h>

class Operacion {
protected:
    int valor1;
    int valor2;
    int resultado;
public:
    void cargar1();
    void cargar2();
    void mostrarResultado();
};

#endif /* OP_H */

