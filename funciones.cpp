#include "funciones.h"
#include "protocolo.h"

#include <stdio.h>
#include <string.h>

void menuEmisor(){

int empaquetar (Protocolo & proto){
                        // 3 bits                    5 bits
    proto.trama[0] = (proto.CMD & 0x07)| ((proto.LNG & 0x1F)<<3);
    memcpy(&trama[1], DATA, LNG); 
}

int fcs(BYTE * arr,int tam){
    int sum_bits=0;
    for (int i = 0; i < tam; i++) // recorrer el arreglo
    {
        for (int j = 0; j < 8; j++)
        {
            sum_bits += (arr[i] >> j) & 0x01;
        }
        
    }
    return sum_bits;
}
    
    // Mostrar el menu
        printf("\n===== ENVIO DE MENSAJES - EMISOR  =====\n");
        printf("Opcion 1 - Cerrar el programa receptor\n");
        printf("Opcion 2 - enviar mensaje de prueba\n");
        printf("Opcion 3 - enviar mensaje de texto\n");
        printf("Opcion 4 - contador de mensajes enviados\n");
        printf("Opcion 5. Salir del programa\n");
        printf("==========================================\n\n");
}
