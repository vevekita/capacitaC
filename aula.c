#include <stdio.h>

int validaHorario(float inicio, float fim){
    int valido;
    if(inicio >= 7.0 && fim < 19.0){
        valido = 1;
    }
    valido = 0;

    return valido;
}

int aulasConflitam(float inicio1, float fim1, float inicio2, float fim2){
    int conflito;
    if(inicio2 >= inicio1 && fim2 <= fim1){
        conflito = 1;
    } 
    conflito = 0;

    return conflito;
}