//
// Created by sing on 23/04/19.
//

#ifndef TAREACORTA1_2_VEHICULO_H
#define TAREACORTA1_2_VEHICULO_H

#include <iostream>
#include "Procesos.h"

class Vehiculo {
public:

    int tipo;
    Procesos *listaProcesos;
    Vehiculo *next;

    Vehiculo(int i);
    Procesos * establecerOrden(int i);
    void solicitarProceso();

};


#endif //TAREACORTA1_2_VEHICULO_H
