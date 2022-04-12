/* Funciones dedicadas a la toma de datos por parte del usuario. */


#ifndef TOMADEDATOS_H_
#define TOMADEDATOS_H_

int getChar(char mensaje[],int reintentos, char minimo, char maximo, char mensajeError[], char *pCaracterIngresado);
int getFloat(char mensaje[],int reintentos, int minimo, int maximo, char mensajeError[], float *pNumeroIngresado);
int getInt(char mensaje[],int reintentos, int minimo, int maximo, char mensajeError[], int *pNumeroIngresado);

#endif /* TOMADEDATOS_H_ */
