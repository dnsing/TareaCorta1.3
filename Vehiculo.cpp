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

            temp->add("A",2);
            temp->add("B",2);
            temp->add("C",4);
            temp->add("D",1);
            temp->add("E",3);
            temp->add("F",1);
            //temp->verProcesos();

            break;

        case 2:

            temp->add("C",2);
            temp->add("A",1);
            temp->add("B",1);
            temp->add("E",2);
            temp->add("D",3);
            temp->add("F",1);
            //temp->verProcesos();

            break;

        case 3:

            temp->add("D",1);
            temp->add("E",4);
            temp->add("A",3);
            temp->add("C",2);
            temp->add("B",1);
            temp->add("F",1);
            //temp->verProcesos();

            break;

        case 4:

            temp->add("B",2);
            temp->add("C",1);
            temp->add("D",4);
            temp->add("A",3);
            temp->add("F",2);
            temp->add("E",1);
            //temp->verProcesos();

            break;

        case 5:

            temp->add("E",1);
            temp->add("F",1);
            temp->add("B",2);
            temp->add("C",4);
            temp->add("A",1);
            temp->add("D",3);
            //temp->verProcesos();

            break;

        case 6:

            temp->add("F",1);
            temp->add("D",1);
            temp->add("C",2);
            temp->add("B",4);
            temp->add("E",3);
            temp->add("A",4);
            //temp->verProcesos();

            break;
    }

    return temp;
}