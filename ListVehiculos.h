//
// Created by sing on 23/04/19.
//

#ifndef TAREACORTA1_2_LISTVEHICULOS_H
#define TAREACORTA1_2_LISTVEHICULOS_H

#include <iostream>
#include "Vehiculo.h"

class ListVehiculos {
public:
    Vehiculo *head, *next, *last;
    int size;
    ListVehiculos();
    void add(Vehiculo *v);
    void addF(Vehiculo *v);
    void delete_first();
    void move_first();
    void verProcesos();

    Vehiculo *getHead() const;
    void setHead(Vehiculo *head);


};


#endif //TAREACORTA1_2_LISTVEHICULOS_H
