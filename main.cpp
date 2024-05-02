//Librerias
#include "funciones.h"
#include "protocolo.h"

#include <stdio.h>
#include<string.h>
#include<stdlib.h>

//Macros

//Variables
Protocolo protocolo; // variable para manejar la estructura 

//Programa principal 

int main(){

//Definicion del protocolo 
BYTE CMD = 3;
BYTE LNG = 5;
//BYTE DATA
protocolo.CMD = 3;
protocolo.LNG = 5;

 int opcion = 0;
    
    do {
    	
        menuEmisor();
      
        // Leer la opcion del usuario
        printf("Seleccione opcion : ");
        scanf("%i", &opcion);
        // Manejar la opcion seleccionada

        switch(opcion) {
            case 1: printf("1"); // incluir funcion para cerrar el programa receptor 
            getchar();
                break;

            case 2:printf("2"); // incluir funcion para enviar mensaje de prueba 
                break;

            case 3: printf("3"); // incluir funcion enviar mensaje de texto 
                break;

            case 4:
               printf("4"); // incluir funcion contador de mensajes 
                break;

                case 5:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida. Por favor, seleccione una opcion valida.\n");
        }
    } while(opcion != 5); // Continuar mostrando el menu hasta que se seleccione la opcion de salir


    return 0;
}

/*CODIGO PROFE MAIN.CPP
#include <stdio.h>
#include "funciones.h"
#include <iostream>
#include <string.h>

Protocolo proto_rx;
Protocolo proto_tx;
int main(){
    // Emisor
    std::cout <<"Ingrese un comando :"<< std::endl;// C++
    std::cin >>proto_tx.CMD;
    printf("Ingrese un mensaje : \n");
    scanf("%s",proto_tx.DATA);
    proto_tx.LNG = strlen((const char *)proto_tx.DATA);
    empaquetar(proto_tx);
    // Simulación de transmisión
    memcpy(proto_rx.trama,proto_tx.trama,proto_tx.LNG +2); // Se copia el arreglo de bytes del transmisor al receptor
    // Receptor
    bool estado = desempaquetar(proto_rx,proto_tx.LNG+2);
    printf("Se recibió un mensaje con estado %s\n",estado? "Correcto":"Incorrecto");
    printf("El comando es : %d \n", proto_rx.CMD);
    printf("El largo del mensaje es %d \n",proto_rx.LNG);
    printf("El mensaje es : %s \n", proto_rx.DATA);
    return  0;
}

*/
