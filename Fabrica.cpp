//
// Created by sing on 23/04/19.
//

#include "Fabrica.h"

using namespace std;
Fabrica::Fabrica(){
    lineaProduccionGeneral =  new ListVehiculos();
    lineadeEspera = new ListVehiculos();
}

/**
 * @brief se agrega en una lista los vehiculos para luego iniciar el proceso
 * @param v vehiculo de tipo 1
 * @param v1 vehiculo de tipo 2
 * @param v2 vehiculo de tipo 3
 * @param v3 vehiculo de tipo 4
 * @param v4 vehiculo de tipo 5
 * @param v5 vehiculo de tipo 6
 */
void Fabrica::lineaGeneral(Vehiculo *v, Vehiculo *v1, Vehiculo *v2, Vehiculo *v3, Vehiculo *v4, Vehiculo *v5) {
    this->lineaProduccionGeneral->add(v);
    this->lineaProduccionGeneral->add(v1);
    this->lineaProduccionGeneral->add(v2);
    this->lineaProduccionGeneral->add(v3);
    this->lineaProduccionGeneral->add(v4);
    this->lineaProduccionGeneral->add(v5);


    this->StartProceso();

}
//borrar el codigo comentado cuando considere que ya no lo necesito
/**
 * @brief se empieza a producir las lineas de proceso tomando en cuenta los vehiculos que se encuentran en la lista de linea de Produccion
 * @return void
 */
void Fabrica::StartProceso(){
    if(lineaProduccionGeneral->head != NULL){
        lineaProduccionGeneral->last = lineaProduccionGeneral->head;
    }else{
        lineaProduccionGeneral->head = lineaProduccionGeneral->head->next;
        lineaProduccionGeneral->last = lineaProduccionGeneral->head;
    }


    while (lineaProduccionGeneral->head != NULL) {
        cout << "ok" << endl;
        if (lineaProduccionGeneral->head->listaProcesos->head->tiempo != 0) {
            cout << "Tipo de proceso: " << lineaProduccionGeneral->head->listaProcesos->head->tipoProceso <<
            " " << lineaProduccionGeneral->head->listaProcesos->head->tiempo << endl;
                lineaProduccionGeneral->head->listaProcesos->head->tiempo--;
        }else{
            lineaProduccionGeneral->head->listaProcesos->deleteF();
            if(lineaProduccionGeneral->head->listaProcesos->head == NULL){
                cout << "listo" << endl;
                lineaProduccionGeneral->delete_first();
            }else{
                cout << "Tipo de proceso: " << lineaProduccionGeneral->head->listaProcesos->head->tipoProceso <<
                     " " << lineaProduccionGeneral->head->listaProcesos->head->tiempo << endl;
                lineaProduccionGeneral->head->listaProcesos->head->tiempo--;
            }

        }

        //lineaProduccionGeneral->verProcesos();

        lineaProduccionGeneral->head = lineaProduccionGeneral->head->next;
    }

    lineaProduccionGeneral->head = lineaProduccionGeneral->last;
    cout<<"--------------------------------------------------------------" << endl;
    if(lineaProduccionGeneral->head != NULL){
        this->StartProceso();
    }

}
/*

void Fabrica::agregarLinea(Vehiculo *v) {


    switch (v->tipo){

        case 1:
            //std::cout << "Agregando nueva linea de produccion de tipo 1 "<< std::endl;
            if (this->lineaProduccion1->size < 3){
                this->lineaProduccion1->addfirst(v);
                //std::cout << "Tamaño de la lista: " << this->lineaProduccion1->size << std::endl;
                break;
            }else{
                std::cout << "Entrando en cambio por prioridad" << std::endl;
                this->darPrioridad(this->lineaProduccion1, v);
            }
            break;

        case 2:
            //std::cout << "Agregando nueva linea de produccion de tipo 2" << std::endl;
            if (this->lineaProduccion2->size < 3){
                this->lineaProduccion2->addfirst(v);
                break;
            }else{
                std::cout << "Entrando en cambio por prioridad" << std::endl;
                this->darPrioridad(this->lineaProduccion2, v);
            }
            break;

        case 3:
            //std::cout << "Agregando nueva linea de produccion de tipo 3"<< std::endl;
            if (this->lineaProduccion3->size < 3){
                this->lineaProduccion3->addfirst(v);
                break;
            }else{
                this->darPrioridad(this->lineaProduccion3, v);
            }
            break;
        case 4:
            //std::cout << "Agregando nueva linea de produccion de tipo 4" << std::endl;
            if (this->lineaProduccion4->size < 3){
                this->lineaProduccion4->addfirst(v);
                break;
            }else{
                this->darPrioridad(this->lineaProduccion4, v);
            }
            break;
        case 5:

            //std::cout << "Agregando nueva linea de produccion de tipo 5" << std::endl;
            if (this->lineaProduccion5->size < 3){
                this->lineaProduccion5->addfirst(v);
            }else{
                this->darPrioridad(this->lineaProduccion5, v);
                break;
            }
            break;
        case 6:
            //std::cout << "Agregando nueva linea de produccion de tipo seis" << std::endl;
            if (this->lineaProduccion6->size < 3){
                this->lineaProduccion6->addfirst(v);
                break;
            }else{
                this->darPrioridad(this->lineaProduccion6, v);
            }
            break;
    }


}*/

/**
 * @brief permite dar prioridad a las lineas de proceso que llegan, y agrega en una cola de espera a los procesos que se necesitan sacar
 * @param listaVehiculo
 * @param v vehiculo que se tiene que dar la prioridad
 */
void Fabrica::darPrioridad(ListVehiculos *listaVehiculo, Vehiculo *v){

    Vehiculo *temp = listaVehiculo->head;

    listaVehiculo->move_first();
    listaVehiculo->addF(v);
    this->lineadeEspera->addF(temp);
    cout << "Se hizo el cambio con éxito" << endl;

}

/*
 * if (this->lineaProduccion1->size < 3){
                this->lineaProduccion1->addfirst(v);
                //std::cout << "Tamaño de la lista: " << this->lineaProduccion1->size << std::endl;
                break;
            }else{
                std::cout << "Entrando en cambio por prioridad" << std::endl;
                this->darPrioridad(this->lineaProduccion1, v);
            }
            if (this->lineaProduccion2->size < 3){
                this->lineaProduccion2->addfirst(v);
                break;
            }else{
                std::cout << "Entrando en cambio por prioridad" << std::endl;
                this->darPrioridad(this->lineaProduccion2, v);
            }
            if (this->lineaProduccion3->size < 3){
                this->lineaProduccion3->addfirst(v);
                break;
            }else{
                this->darPrioridad(this->lineaProduccion3, v);
            }
            if (this->lineaProduccion4->size < 3){
                this->lineaProduccion4->addfirst(v);
                break;
            }else{
                this->darPrioridad(this->lineaProduccion4, v);
            }
            if (this->lineaProduccion5->size < 3){
                this->lineaProduccion5->addfirst(v);
            }else{
                this->darPrioridad(this->lineaProduccion5, v);
            }
            if (this->lineaProduccion6->size < 3){
                this->lineaProduccion6->addfirst(v);
                break;
            }else{
                this->darPrioridad(this->lineaProduccion6, v);
            }
 */

