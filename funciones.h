#ifndef funciones_h
#define funciones_h

#include "protocolo.h"



// Declaraciones de funciones
void menuEmisor();
int empaquetar(Protocolo &proto);
bool desampaquetar(Protocolo &proto);
int fcs(BYTE * arr,int tam);

#endif 
