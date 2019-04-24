//
// Created by sing on 23/04/19.
//

#ifndef TAREACORTA1_2_FABRICA_H
#define TAREACORTA1_2_FABRICA_H

#include "ListVehiculos.h"


class Fabrica {

public:
    ListVehiculos* lineaProduccionGeneral;

    ListVehiculos *lineaProduccion1;
    ListVehiculos *lineaProduccion2;
    ListVehiculos *lineaProduccion3;
    ListVehiculos *lineaProduccion4;
    ListVehiculos *lineaProduccion5;
    ListVehiculos *lineaProduccion6;
    ListVehiculos *lineadeEspera;

    Fabrica();
    void lineaGeneral(Vehiculo *v, Vehiculo *v1, Vehiculo *v2, Vehiculo *v3, Vehiculo *v4, Vehiculo *v5);
    void StartProceso();

    void agregarLinea(Vehiculo *v);
    void darPrioridad(ListVehiculos *listaVehiculos, Vehiculo *v);

};


#endif //TAREACORTA1_2_FABRICA_H
