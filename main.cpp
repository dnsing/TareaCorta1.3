#include <iostream>
#include "Fabrica.h"
int main() {
    Fabrica *pd = new Fabrica();

    Vehiculo *v = new Vehiculo(1);
    Vehiculo *v2 = new Vehiculo(2);
    Vehiculo *v3 = new Vehiculo(3);
    Vehiculo *v4 = new Vehiculo(4);
    Vehiculo *v5 = new Vehiculo(5);
    Vehiculo *v6 = new Vehiculo(6);


    pd->lineaGeneral(v, v2, v3, v4, v5, v6);
    return 0;
}