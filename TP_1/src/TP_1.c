/*
Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas
para ofrecerlos a sus clientes.
Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.
 */

#include <stdio.h>
#include <stdlib.h>
#include "Calculos.h"
#include "TomaDeDatos.h"
#include "AbrirMenus.h"

int main(void) {

	setbuf(stdout, NULL);

	int opcionIngresada;
	float kmIngresados=0;
	float precioAerolineas=0;
	float precioLatam=0;
	                                                //Resultados de Aerolineas -------- Variables
	float debitoAerolineas, creditoAerolineas, bitcoinAerolineas, unitarioAerolineas; //Resultados de LATAM
	float debitoLatam, creditoLatam, bitcoinLatam, unitarioLatam;
	float diferencia;

	int flagCalculos=0;
	float cargaForzadaAerolineas;
	float cargaForzadaLatam;// Variables para la carga forzada

do{

	AbrirMenuPrincipal(kmIngresados, precioAerolineas, precioLatam);//Funcion para abrir el menu principal

	getInt("Ingrese la opcion deseada:\n", 100, 1, 6, "Error, ingrese una opcion valida.\n", &opcionIngresada);
	//Pedimos al usuario la opcion que quiere elegir en el menu principal y la validamos

	switch(opcionIngresada)
	{
	case 1:
		system("cls");// Pedimos al usuario los km y los validamos
		getFloat("Ingrese a continuacion los kilometros del vuelo:\n", 100, 1, 1000000,
				"Error, ingrese una distancia valida\n", &kmIngresados);
		break;
	case 2:
		system("cls"); // Validamos que haya ingresado los datos de la opcion 1 y de ser asi pedimos los precios
		if(kmIngresados!=0){
			getFloat("Ingrese el precio para Aerolineas:\n", 100, 1, 10000000,
					"Error, ingrese un precio valido.\n", &precioAerolineas);
			getFloat("Ingrese el precio para LATAM:\n", 100, 1, 10000000,
					"Error, ingrese un precio valido.\n", &precioLatam);
		}
		else{
			printf("Error, primero debe ingresar los kilometros del vuelo.\n\n");
			system("pause");
		}
		break;
	case 3: //Validamos que haya ingresado los precios y de ser asi hacemos todos los calculos.
		system("cls");
		if(precioAerolineas!=0 && precioLatam!=0){
			AbrirOpcion3();
			calcularTodo(precioAerolineas, precioLatam, kmIngresados, &debitoAerolineas, &creditoAerolineas,
				&bitcoinAerolineas,	&unitarioAerolineas, &debitoLatam, &creditoLatam, &bitcoinLatam,
				&unitarioLatam, &diferencia);
			flagCalculos=1;
		}
		else{
			printf("Error, primero debe ingresar los precios de ambas aerolineas.\n\n");
			system("pause");
		}
		break;
	case 4:
		system("cls"); //Informamos todos los resultados
		if(flagCalculos==1){
			informarResultados(precioAerolineas, precioLatam, kmIngresados, debitoAerolineas, creditoAerolineas,
					bitcoinAerolineas, unitarioAerolineas, debitoLatam, creditoLatam, bitcoinLatam,
					unitarioLatam, diferencia);
		}
		else{
			printf("Error, primero debe ingresar la opcion 3 para realizar los calculos.\n\n");
			system("pause");
		}
		break;
	case 5:
		system("cls");
		//CARGA FORZADA
		CargaForzada(7090, 162965, 159339, "Error de calculo", &cargaForzadaAerolineas, &cargaForzadaLatam);
		break;
	}

	system("cls");

}while(opcionIngresada!=6); // Opcion para cerrar el programa..0

printf("El programa se cerrara\n\n");
system("pause");

}

