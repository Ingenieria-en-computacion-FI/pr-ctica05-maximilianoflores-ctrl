#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista* lista_crear()
{
    lista* nueva_lista = (Lista*)malloc(sizeof(lista));

    if (nueva_lista != NULL){
        nueva_lista->head = NULL
        nueva_lista->tail = NULL
    }
    return nueva_lista;
}

bool lista_vacia(Lista* lista)
{
    if(lista ->head ==NULL) {
        return true;
    }
    else{
        return false;
}
}

void lista_insertar_head(Lista* lista, int dato)
{
   Nodo* nuevo_nodo = nodo_crear(dato);

   if (lista_vacia(lista)) {
    lista->head = nuevo_nodo;
    lista->tail = nuevo_nodo;
   }
   else{
    nuevo_nodo->siguiente = lista->head
    lista->head = nuevo_nodo;
   }
}

void lista_insertar_tail(Lista* lista, int dato)
{
   Nodo* nuevo_nodo = nodo_crear(dato);

   if(lista_vacia(lista)) {
    Lista -> head = nuevo_nodo;
    Lista -> tail = nuevo_nodo

   }
   else{
    lista -> tail -> siguiente = nuevo_nodo;
    Lista -> tail = nuevo_nodo;
   }
}

int lista_eliminar_head(Lista* lista)
{
   if (lista_vacia(lista)){
    return -1;
   }
Nodo* nodo_a_borrar= lista->head;
int dato_guardado = nodo_a_borrar->dato;

lista->head=nodo_a_borrar-> siguiente;

if (lista->head ==NULL){
    lista ->tail = NULL;
}
nodo_destruir(nodo_a_borrar);
return dato_guardado;
}

int lista_eliminar_tail(Lista* lista)
{
    if(lista_vacia(lista)){
        return -1;
    }

    if(lista->head==lista->tail){
        lista->head=NULL;
        lista->tail=NULL;
    }
    else{
        Nodo* actual=lista->head;
        while (actual->siguiente != lista->tail)
        }

        actual ->siguiente=NULL;
        lista->tail=actual;

        nodo_destruir(nodo_a_borrar);
        return dato_guardado;

    }

void lista_imprimir(Lista* lista)
{
    Nodo* actual = lista->head;

    while(actual != NULL)
    {
        printf("%d -> ", actual->dato);
        actual = actual->siguiente;
    }

    printf("NULL\n");
}

void lista_destruir(Lista* lista)
{
    if(lista !=NULL){
        while(!lista_vacia(lista)){
            lista_eliminar_head(lista);
        }
        free(lista);
    }

}
