/* Funciones dedicadas a la toma de datos provenientes del usuario. */


#ifndef TOMADEDATOS_H_
#define TOMADEDATOS_H_
/// @brief Recibe un caracter y lo valida
/// @param mensaje Mensaje a imprimir
/// @param reintentos Cantidad de reintentos en caso de error
/// @param minimo Rango minimo
/// @param maximo Rango maximo
/// @param mensajeError Mensaje de error a imprimir
/// @param pCaracterIngresado Puntero a variable tipo char
/// @return -1 si hubo error, 1 si salio ok
int getChar(char mensaje[],int reintentos, char minimo, char maximo, char mensajeError[], char *pCaracterIngresado);
/// @brief Recibe un numero tipo float y lo valida
/// @param mensaje Mensaje a imprimir
/// @param reintentos Numero de reintentos en caso de error
/// @param minimo Rango minimo
/// @param maximo Rango maximo
/// @param mensajeError Mensaje de error a imprimir
/// @param pNumeroIngresado Puntero a variable tipo float
/// @return -1 si hubo error, 0 si salio ok
int getFloat(char mensaje[],int reintentos, int minimo, int maximo, char mensajeError[], float *pNumeroIngresado);
/// @brief Recibe un numero tipo int y lo valida
/// @param mensaje Mensaje a imprimir
/// @param reintentos Numero de reintentos en caso de error
/// @param minimo Rango minimo
/// @param maximo Rango maximo
/// @param mensajeError Mensaje de error a imprimir
/// @param pNumeroIngresado Puntero a variable tipo int
/// @return -1 si hubo error, 0 si salio ok
int getInt(char mensaje[],int reintentos, int minimo, int maximo, char mensajeError[], int *pNumeroIngresado);

#endif /* TOMADEDATOS_H_ */
