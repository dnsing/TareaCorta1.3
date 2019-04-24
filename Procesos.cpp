//
// Created by sing on 17/04/19.
//

#include "Procesos.h"
using namespace std;
Procesos::Procesos(){
    head = NULL;
    size = 0;

}
void Procesos::add(string s, int i){
    ProcesoSimple *proceso = new ProcesoSimple();
    proceso->tipoProceso = s;
    proceso->tiempo = i;
    proceso->next=NULL;

    if(this->head == NULL){
        //cout << "Lista vacia" << endl;
        this->head = proceso;
    }else{
        ProcesoSimple *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = proceso;
    }

}
void Procesos::addF(string s, int i) {

    ProcesoSimple *proceso = new ProcesoSimple();
    proceso->tipoProceso = s;
    proceso->tiempo = i;
    proceso->next = this->head;
    this->head = proceso;
    this->size++;

}

void Procesos::deleteF(){

    ProcesoSimple *temp;
    if (head == NULL) {
        cout << "No hay elementos para eliminar" << endl;
    } else {
        temp = head;
        head = temp->next;
        delete (temp);
        cout << "Se elimino el primer proceso" << endl;
    }
    this->size--;

}

void Procesos::verProcesos() {
    ProcesoSimple *temp;
    temp = head;
    int i = 1;
    cout << "El orden de los procesos es el siguiente" << endl;
    while (temp != NULL) {
        cout << i << ") Proceso: " << temp->tipoProceso << "|" << "Tiempo: " << temp->tiempo<< endl;
        temp = temp->next;
        i++;
    }
}
