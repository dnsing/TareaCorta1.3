//
// Created by sing on 23/04/19.
//

#include "Vehiculo.h"

Vehiculo::Vehiculo(int i){
    tipo = i;
    listaProcesos = this->establecerOrden(i);
}

void Vehiculo::solicitarProceso(){


}
//implementar un addLast() para meter los datos a lo ultimo y no pase lo que pasa ahorita
Procesos * Vehiculo::establecerOrden(int i) {

    Procesos *temp = new Procesos;

    switch (i){

        case 1:

            temp->addF("A",2);
            temp->addF("B",2);
            temp->addF("C",4);
            temp->addF("D",1);
            temp->addF("E",3);
            temp->addF("F",1);
            //temp->verProcesos();

            break;

        case 2:

            temp->addF("C",2);
            temp->addF("A",1);
            temp->addF("B",1);
            temp->addF("E",2);
            temp->addF("D",3);
            temp->addF("F",1);
            //temp->verProcesos();

            break;

        case 3:

            temp->addF("D",1);
            temp->addF("E",4);
            temp->addF("A",3);
            temp->addF("C",2);
            temp->addF("B",1);
            temp->addF("F",1);
            //temp->verProcesos();

            break;

        case 4:

            temp->addF("B",2);
            temp->addF("C",1);
            temp->addF("D",4);
            temp->addF("A",3);
            temp->addF("F",2);
            temp->addF("E",1);
            //temp->verProcesos();

            break;

        case 5:

            temp->addF("E",1);
            temp->addF("F",1);
            temp->addF("B",2);
            temp->addF("C",4);
            temp->addF("A",1);
            temp->addF("D",3);
            //temp->verProcesos();

            break;

        case 6:

            temp->addF("F",1);
            temp->addF("D",1);
            temp->addF("C",2);
            temp->addF("B",4);
            temp->addF("E",3);
            temp->addF("A",4);
            //temp->verProcesos();

            break;
    }

    return temp;
}