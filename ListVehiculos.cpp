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

Vehiculo *ListVehiculos::getHead() const {
    return head;
}

void ListVehiculos::setHead(Vehiculo *head) {
    ListVehiculos::head = head;
};
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

void ListVehiculos::addF(Vehiculo *v){

    Vehiculo *vehiculo = v;
    vehiculo->next = this->head;
    this->head = vehiculo;
    this->size++;
    cout << "Vehiculo tipo: " << vehiculo->tipo << " anadido" << endl;

};


void ListVehiculos::delete_first(){

    Vehiculo *temp;
    if (head == NULL) {
        cout << "No hay elementos para eliminar" << endl;
    } else {
        temp = head;
        head = temp->next;
        delete (temp);
        cout << "Se elimino el primer vehiculo" << std::endl;
    }
    this->size--;

};

void ListVehiculos::move_first(){

    Vehiculo *temp;
    if (head == NULL) {
        cout << "No hay elementos para eliminar." << endl;
    } else {
        temp = this->getHead();
        setHead(temp->next);
        //delete (temp); no se si eliminarlo
        cout << "Se elimono el primer vehiculo" << endl;
    }
    this->size--;

};


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