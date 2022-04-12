/* Funciones dedicadas a resolver los cálculos requeridos por el programa. */

#ifndef CALCULOS_H_
#define CALCULOS_H_

#include <stdio.h>
#include <stdlib.h>
#include "TomaDeDatos.h"

float CalcularDebito (float precioBruto);
float CalcularCredito (float precioBruto);
float CalcularBitcoin (float precioPesos);
float CalcularPrecioKm (float precio, float kilometros);
float CalcularDiferencia (float precio1, float precio2);

#endif /* CALCULOS_H_ */
