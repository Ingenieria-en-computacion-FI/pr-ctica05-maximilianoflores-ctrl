#ifndef BICOLA_H
#define BICOLA_H
#include <stdbool.h>
#include "../lista/lista.h"
#include "../cola/cola.h"

typedef Lista_Bicola;

Bicola * cola_crear();

bool bicola_vacia(Cola*c);

void bicola_enqueue_head(Cola*c, int dato);

void bicola_enqueue_tail(Cola*c, int dato);

int bicola_denqueue_head(Cola*c, int dato);

int bicola_denqueue_tail(Cola*, int dato);

int bicola_enqueue_head(Cola*c);

int bicola_enqueue_tail(Cola*c);

void bicola_destruir(Cola *c);

#endif