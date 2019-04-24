//
// Created by sing on 17/04/19.
//

#ifndef TAREACORTA1_2_PROCESOS_H
#define TAREACORTA1_2_PROCESOS_H

#include <iostream>
#include "ProcesoSimple.h"

class Procesos {
public:
    ProcesoSimple *head;
    int size;
    Procesos();
    void add(string s, int i);
    void addF(string s, int i);
    void deleteF();
    void verProcesos();

};


#endif //TAREACORTA1_2_PROCESOS_H
