/*
 * AbrirMenus.c
 *
 *  Created on: 13 abr 2022
 *      Author: Family 2.0
 */

#include <stdio.h>
#include <stdlib.h>
#include "AbrirMenus.h"
#include "Calculos.h"

void AbrirMenuPrincipal (float kilometros, float precio1, float precio2){


	printf("|\tBIENVENIDO A LA BASE DE DATOS DE AEROLINEAS/LATAM        |\n"
			"------------------------------------------------------------------\n\n");
	printf("1. Ingresar Kilometros: (km = %.2f)\n\n", kilometros);
	printf("------------------------------------------------------------------\n\n");
	printf("2. Ingresar precio de vuelos: (Aerolineas= $%.2f, Latam = $%.2f)\n\n", precio1, precio2);
	printf("------------------------------------------------------------------\n\n");
	printf("3. Calcular todos los costos\n\n"
		   "------------------------------------------------------------------\n\n"
		   "4. Informar resultados\n\n"
		   "------------------------------------------------------------------\n\n"
		   "5. Carga forzada de datos\n"
		   "6. Salir\n\n");

}

void AbrirOpcion3 (void){

	printf("Se calcularan los siguientes costos:\n\n"
	"  -Tarjeta de debito (descuento 10%%)\n"
	"  -Tarjeta de credito (interes 25%%)\n"
	"  -Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)\n"
	"  -Precio por km (Precio unitario)\n"
	"  -Diferencia de precio ingresada (Latam - Aerolineas)\n\n");

	system("pause");

}

int informarResultados (float precio1, float precio2, float kilometros, float debito1, float credito1,
		float bitcoin1, float unitario1, float debito2, float credito2, float bitcoin2, float unitario2,
		float resta){

	int	retorno=-1;

	if(precio1!=0 && precio2!=0 && kilometros!=0 && debito1!=0 && credito1!=0 &&
			bitcoin1!=0 && unitario1!=0 && debito2!=0 && credito2!=0 && bitcoin2!=0 &&
			unitario2!=0 && resta!=0){

		printf(" Informar resultados\n\n");
		printf("Distancia de vuelo: %.2f Km\n\n", kilometros);
		printf("  Aerolineas: $%.2f\n", precio1);
		printf("  Precio con tarjeta de debito: $%.2f\n", debito1);
		printf("  Precio con tarjeta de credito: $%.2f\n", credito1);
		printf("  Precio pagando con bitcoin: $%.5f\n", bitcoin1);
		printf("  Precio unitario: $%.2f\n\n", unitario1);
		printf("  LATAM: $%.2f\n", precio2);
		printf("  Precio con tarjeta de debito: $%.2f\n", debito2);
		printf("  Precio con tarjeta de credito: $%.2f\n", credito2);
		printf("  Precio pagando con bitcoin: $%.5f\n", bitcoin2);
		printf("  Precio unitario: $%.2f\n\n", unitario2);

		printf("La diferencia de precio es: $%.2f\n\n", resta);
		system("pause");

		retorno=0;
	}

	return retorno;
}




int CargaForzada (float kilometros, float precio1, float precio2, char mensajeError[],
	float *resultado1,float *resultado2 ){

	int retorno=-1;

	if(mensajeError!=NULL && resultado1!=NULL && resultado2!=NULL){

		printf("Usted ha elegido la opcion de carga forzada:\n\n");
		printf("Distancia de vuelo: %.2f Km\n\n", kilometros);

		printf("Aerolineas: $%.2f\n\n", precio1);
		*resultado1=multiplicar(precio1, 10)/100;
		*resultado1=precio1-*resultado1;
		printf("  Precio con tarjeta de debito: $%.2f\n", *resultado1);
		*resultado1=multiplicar(precio1, 25)/100;
		*resultado1=precio1+*resultado1;
		printf("  Precio con tarjeta de credito: %.2f\n", *resultado1);
		*resultado1=dividir(precio1, 4606954.55);
		printf("  Precio pagando con bitcoin: %.5f\n", *resultado1);
		*resultado1=dividir(precio1, kilometros);
		printf("  Precio unitario: $%.2f\n\n", *resultado1);
		printf("----------------------------------------------\n\n");
		printf("LATAM: $%.2f\n\n", precio2);
		*resultado2=multiplicar(precio2, 10)/100;
		*resultado2=precio2-*resultado2;
		printf("  Precio con tarjeta de debito: $%.2f\n", *resultado2);
		*resultado2=multiplicar(precio2, 25)/100;
		*resultado2=precio1+*resultado2;
		printf("  Precio con tarjeta de credito: %.2f\n", *resultado2);
		*resultado2=dividir(precio2, 4606954.55);
		printf("  Precio pagando con bitcoin: %.5f\n", *resultado2);
		*resultado2=dividir(precio2, kilometros);
		printf("  Precio unitario: $%.2f\n\n", *resultado2);

		if(precio1>precio2){

			*resultado1=restar(precio1, precio2);
			printf("La diferencia de precio es: $%.2f\n\n\n", *resultado1);
		}
		else{
			*resultado2=restar(precio2, precio1);
			printf("La diferencia de precio es: $%.2f\n\n\n", *resultado2);
		}

		system("pause");

		retorno=0;
	}

	return retorno;
}
