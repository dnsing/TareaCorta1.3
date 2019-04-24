//
// Created by sing on 23/04/19.
//

#include "Fabrica.h"

using namespace std;
Fabrica::Fabrica(){

    lineaProduccionGeneral =  new ListVehiculos();


    lineaProduccion1 = new ListVehiculos();
    lineaProduccion2 = new ListVehiculos();
    lineaProduccion3 = new ListVehiculos();
    lineaProduccion4 = new ListVehiculos();
    lineaProduccion5 = new ListVehiculos();
    lineaProduccion6 = new ListVehiculos();
    lineadeEspera = new ListVehiculos();
}

void Fabrica::lineaGeneral(Vehiculo *v, Vehiculo *v1, Vehiculo *v2, Vehiculo *v3, Vehiculo *v4, Vehiculo *v5) {
    this->lineaProduccionGeneral->addfirst(v);
    this->lineaProduccionGeneral->addfirst(v1);
    this->lineaProduccionGeneral->addfirst(v2);
    this->lineaProduccionGeneral->addfirst(v3);
    this->lineaProduccionGeneral->addfirst(v4);
    this->lineaProduccionGeneral->addfirst(v5);

    this->StartProceso();

}
//hacer lo mismo que sucede aqui, pero para cada uno de los carros
//borrar el codigo comentado cuando considere que ya no lo necesito
void Fabrica::StartProceso(){
    //lineaProduccionGeneral->getHead()->lp->head->tipoProceso;

    while(lineaProduccionGeneral->getHead() != NULL){
        if(lineaProduccionGeneral->getHead()->listaProcesos->head->tiempo != 0){
            cout << "Tipo de proceso: " << lineaProduccionGeneral->getHead()->listaProcesos->head->tipoProceso <<
                 " "<< lineaProduccionGeneral->getHead()->listaProcesos->head->tiempo << endl;
            lineaProduccionGeneral->getHead()->listaProcesos->head->tiempo--;
        }else{
            lineaProduccionGeneral->getHead()->listaProcesos->deleteF();
        }
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

void Fabrica::darPrioridad(ListVehiculos *lv, Vehiculo *v){

    Vehiculo *temp = lv->getHead();

    lv->move_first();
    lv->addfirst(v);
    this->lineadeEspera->addfirst(temp);
    //lv->move_first();
    //lv->addfirst(v);
    cout << "Se ha realizado el cambio con éxito" << endl;

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

