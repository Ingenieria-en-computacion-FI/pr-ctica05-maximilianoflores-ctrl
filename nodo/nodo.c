#include <stdlib.h>
#include "nodo.h"
#include <stdio.h>

Nodo* nodo_crear(int dato){
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    if(nuevo Nodo !=NULL) {
        nuevoNodo -> dato= dato;
        nuevoNodo->siguiente=NULL;
        return nuevoNodo;
    }
 

void nodo_destruir(Nodo* nodo)
{
    if(nodo !=NULL){
        free(nodo);
    }
}
