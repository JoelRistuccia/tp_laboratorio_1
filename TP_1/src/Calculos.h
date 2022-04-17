/* Funciones dedicadas a resolver los cálculos requeridos por el programa. */

#ifndef CALCULOS_H_
#define CALCULOS_H_

#include <stdio.h>
#include <stdlib.h>

/// @brief suma 2 floats
/// @param num1 recibe 1 numero tipo float
/// @param num2 recibe 1 numero tipo float
/// @return resultado de la suma
float sumar (float num1, float num2);
/// @brief resta 2 floats
/// @param num1 recibe 1 tipo numero float
/// @param num2 recibe 1 tipo numero float
/// @return diferencia
float restar (float num1, float num2);
/// @brief multiplica 2 floats
/// @param num1 recibe 1 numero tipo float
/// @param num2 recibe 1 numero tipo float
/// @return producto
float multiplicar (float num1, float num2);
/// @brief divide 2 floats
/// @param num1 recibe 1 numero tipo float
/// @param num2 recibe 1 numero tipo float
/// @return cociente
float dividir (float num1, float num2);
/// @brief Realiza todos los calculos requeridos por la opcion 3 del programa
/// @param precio1 recibe una variable tipo float
/// @param precio2 recibe una variable tipo float
/// @param kilometros recibe una variable float
/// @param debito1 recibe un puntero a float
/// @param credito1 recibe un puntero a float
/// @param bitcoin1 recibe un puntero a float
/// @param unitario1 recibe 1 numero float
/// @param debito2 recibe un puntero a float
/// @param credito2 recibe un puntero a float
/// @param bitcoin2 recibe un puntero a float
/// @param unitario2 recibe un puntero a float
/// @param resta recibe un puntero a float
/// @return -1 si hubo error, 0 si salio ok
int calcularTodo (float precio1, float precio2, float kilometros, float *debito1, float *credito1,
		float *bitcoin1, float *unitario1, float *debito2, float *credito2, float *bitcoin2, float *unitario2,
		float *resta);

#endif /* CALCULOS_H_ */
