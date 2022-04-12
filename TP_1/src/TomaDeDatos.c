#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "TomaDeDatos.h"


int getChar(char mensaje[],int reintentos, char minimo, char maximo, char mensajeError[], char *pCaracterIngresado){

	int retorno= -1;
	char auxiliarChar;
	int retornoScanf;

	if(mensaje!=NULL && reintentos>0 && minimo<maximo && mensajeError!=NULL && pCaracterIngresado!=NULL){

		printf("%s", mensaje);
		retornoScanf= scanf("%c", &auxiliarChar);

		do{

			if(auxiliarChar<minimo || auxiliarChar>maximo || retornoScanf!=1){
				printf("%s", mensajeError);
				retornoScanf= scanf("%c", &auxiliarChar);
				reintentos--;

			}else
			{
				*pCaracterIngresado=auxiliarChar;
				reintentos=0;
				retorno=0;
			}

		}while(reintentos>0);
	}

	return retorno;
}


int getFloat(char mensaje[],int reintentos, int minimo, int maximo, char mensajeError[], float *pNumeroIngresado){

	int retorno= -1;
	float auxiliarFloat;
	int retornoScanf;

	if(mensaje!=NULL && reintentos>0 && minimo<maximo && mensajeError!=NULL && pNumeroIngresado!=NULL){

		printf("%s", mensaje);
		retornoScanf= scanf("%f", &auxiliarFloat);

		do{

			if(auxiliarFloat<minimo || auxiliarFloat>maximo || retornoScanf!=1){
				printf("%s", mensajeError);
				retornoScanf= scanf("%f", &auxiliarFloat);
				reintentos--;

			}else
			{
				*pNumeroIngresado=auxiliarFloat;
				reintentos=0;
				retorno=0;
			}

		}while(reintentos>0);
	}

	return retorno;
}


int getInt(char mensaje[],int reintentos, int minimo, int maximo, char mensajeError[], int *pNumeroIngresado){

	int retorno= -1;
	int auxiliarInt;
	int retornoScanf;

	if(mensaje!=NULL && reintentos>0 && minimo<maximo && mensajeError!=NULL && pNumeroIngresado!=NULL){

		printf("%s", mensaje);
		retornoScanf= scanf("%d", &auxiliarInt);

		do{

			if(auxiliarInt<minimo || auxiliarInt>maximo || retornoScanf!=1){
				printf("%s", mensajeError);
				retornoScanf= scanf("%d", &auxiliarInt);
				reintentos--;

			}else
			{
				*pNumeroIngresado=auxiliarInt;
				reintentos=0;
				retorno=0;
			}

		}while(reintentos>0);
	}

	return retorno;
}




