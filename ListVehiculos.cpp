//
// Created by sing on 23/04/19.
//

#include "ListVehiculos.h"

using namespace std;
ListVehiculos::ListVehiculos(){

    head = NULL;
    next = NULL;
    last = NULL;
    size = 0;
}

/**
 * @brief agrega un vehiculo a la lista de vehiculos
 * @param v vehiculo para agregar
 */
void ListVehiculos::add(Vehiculo *v){
    Vehiculo *vehiculo = v;
    vehiculo->next=NULL;

    if(this->head == NULL){
        this->head = vehiculo;
    }else{
        Vehiculo *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = vehiculo;
    }
    this->size++;

}

/**
 * @brief se anade un vehiculo al inicio de la lista de vehiculos
 * @param v vehiculo para anadir
 */
void ListVehiculos::addF(Vehiculo *v){

    Vehiculo *vehiculo = v;
    vehiculo->next = this->head;
    this->head = vehiculo;
    this->size++;
    cout << "Vehiculo tipo: " << vehiculo->tipo << " anadido" << endl;

};

/**
 * @brief elimina el vehiculo que se encuentra al principio de la lista
 */
void ListVehiculos::delete_first(){

    Vehiculo *temp;
    if (head == NULL) {
        cout << "No hay elementos para eliminar" << endl;
    } else {
        temp = head;
        head = temp->next;
        free (temp);
        cout << "Se elimino el primer vehiculo" << std::endl;
    }
    this->size--;

};

/**
 * @brief elimina vehiculos de la lista para darle prioridad a otro proceso
 */
void ListVehiculos::move_first(){

    Vehiculo *temp;
    if (head == NULL) {
        cout << "No hay elementos para eliminar." << endl;
    } else {
        temp = this->head;
        head = (temp->next);
        //delete (temp); no se si eliminarlo
        cout << "Se elimina el primer vehiculo" << endl;
    }
    this->size--;

};

/**
 * @brief muestra los tipos de vehiculos y los procesos que tiene
 */
void ListVehiculos::verProcesos(){

    Vehiculo *temp;
    temp = head;
    int i = 1;
    cout << "Orden de los vehiculos: " << endl;
    while (temp != NULL) {
        cout << i << ") Vehiculos tipo: " << temp->tipo << " "<< endl;
        temp->listaProcesos->verProcesos();
        temp = temp->next;
        i++;
    }

};