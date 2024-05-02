#ifndef FRAMES_H 
#define FRAMES_H
#define BYTE unsigned int
#define LARGO_DATA 31

struct Protocolo{
    BYTE CMD; // 3 bits
    BYTE LNG; // 5 bits 
    BYTE DATA[LARGO_DATA]; // 31 bytes max
    BYTE FCS; // 9 bits
    BYTE Frames[LARGO_DATA+3]; // encapsular trama 
};

#endif
