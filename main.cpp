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

