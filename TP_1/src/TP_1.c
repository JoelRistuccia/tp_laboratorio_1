/*
Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas
para ofrecerlos a sus clientes.
Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.
 */

#include <stdio.h>
#include <stdlib.h>
#include "Calculos.h"

int main(void) {

	setbuf(stdout, NULL);

	int opcionIngresada;
	float kmIngresados;
	float precioAerolineas;
	float precioLatam;

	float resultadoLatam;
	float resultadoAerolineas;
	char opcionSubmenu;

	char* opcionElegida;


do{
	printf("|\tBIENVENIDO A LA BASE DE DATOS DE AEROLINEAS/LATAM        |\n");
	printf("------------------------------------------------------------------\n\n");

	printf("1. Ingresar Kilometros: (km = %.2f)\n\n",kmIngresados);
	printf("------------------------------------------------------------------\n\n");

	printf("2. Ingresar precio de vuelos: (Aerolineas= $%.2f, Latam = $%.2f)\n",precioAerolineas, precioLatam);
	printf("  -Precio vuelo Aerolineas:\n");
	printf("  -Precio vuelo LATAM:\n\n");
	printf("------------------------------------------------------------------\n\n");

	printf("3. Calcular todos los costos\n\n");
	printf("  a)Tarjeta de debito (descuento 10%%)\n");
	printf("  b)Tarjeta de credito (interes 25%%)\n");
	printf("  c)Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)\n");
	printf("  d)Mostrar precio por km (Precio unitario)\n");
	printf("  e)Mostrar diferencia de precio ingresada (Latam - Aerolineas)\n\n");
	printf("------------------------------------------------------------------\n\n");

	printf("4. Informar resultados\n\n");
	printf("  LATAM:\n");
	printf("  a)Precio con tarjeta de debito:\n");
	printf("  b)Precio con tarjeta de credito:\n");
	printf("  c)Precio pagando con bitcoin:\n");
	printf("  d)Precio unitario:\n\n");
	printf("  Aerolineas:\n");
	printf("  a)Precio con tarjeta de debito:\n");
	printf("  b)Precio con tarjeta de credito:\n");
	printf("  c)Precio pagando con bitcoin:\n");
	printf("  d)Precio unitario:\n\n");
	printf("e)La diferencia de precio es: \n\n");
	printf("------------------------------------------------------------------\n\n");
	printf("5. Carga forzada de datos\n");
	printf("6. Salir\n\n");

	getInt("Ingrese la opcion deseada:\n", 100, 1, 6, "Error, ingrese una opcion valida.\n", &opcionIngresada);

	switch(opcionIngresada)
	{
	case 1:
		system("cls");
		getFloat("Ingrese a continuacion los kilometros del vuelo:\n", 100, 1, 1000000,
				"Error, ingrese una distancia valida\n", &kmIngresados);
		break;
	case 2:
		system("cls");
		getFloat("Ingrese el precio para Aerolineas:\n", 100, 1, 10000000,
				"Error, ingrese un precio valido.\n", &precioAerolineas);

		getFloat("Ingrese el precio para LATAM:\n", 100, 1, 10000000,
				"Error, ingrese un precio valido.\n", &precioLatam);
		break;
	case 3:
		system("cls");
		printf(" Calcular todos los costos\n\n");
		printf("  a)Tarjeta de debito (descuento 10%%)\n");
		printf("  b)Tarjeta de credito (interes 25%%)\n");
		printf("  c)Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)\n");
		printf("  d)Mostrar precio por km (Precio unitario)\n");
		printf("  e)Mostrar diferencia de precio ingresada (Latam - Aerolineas)\n\n");

		fflush(stdin);
		getChar("Ingrese la opcion deseada:\n", 100, 'a', 'e', "Error, ingrese una opcion valida.\n", &opcionSubmenu);

		switch(opcionSubmenu){
		case 'a':
			resultadoLatam=CalcularDebito(precioLatam);
			resultadoAerolineas=CalcularDebito(precioAerolineas);
			opcionElegida="Precio con tarjeta de debito:\n";
			system("pause");
			break;
		case 'b':
			resultadoLatam=CalcularCredito(precioLatam);
			resultadoAerolineas=CalcularCredito(precioAerolineas);
			opcionElegida="Precio con tarjeta de credito:\n";
			break;
		case 'c':
			resultadoLatam=CalcularBitcoin(precioLatam);
			resultadoAerolineas=CalcularBitcoin(precioAerolineas);
			opcionElegida="Precio en bitcoin:\n";
			break;
		case 'd':
			resultadoLatam=CalcularPrecioKm(precioLatam, kmIngresados);
			resultadoAerolineas=CalcularPrecioKm(precioAerolineas, kmIngresados);
			opcionElegida="Precio por km/precio unitario:\n";
			break;
		case 'e':
			resultadoLatam=CalcularDiferencia(precioLatam, precioAerolineas);
			opcionElegida="Diferencia de precios (LATAM - Aerolineas)";
			break;
		}
		break;
		case 4:
			switch(opcionSubmenu){
			case 'a':
				system("cls");
				printf("%s\n",opcionElegida);
				printf("LATAM: $%.2f\n",resultadoLatam);
				printf("Aerolineas: $%.2f\n\n", resultadoAerolineas);
				system("pause");
				break;
			case 'b':
				system("cls");
				printf("%s\n",opcionElegida);
				printf("LATAM: $%.2f\n",resultadoLatam);
				printf("Aerolineas: $%.2f\n\n", resultadoAerolineas);
				system("pause");
				break;
			case 'c':
				system("cls");
				printf("%s\n",opcionElegida);
				printf("LATAM: $%.10f\n",resultadoLatam);
				printf("Aerolineas: $%.10f\n\n", resultadoAerolineas);
				system("pause");
				break;
			case 'd':
				system("cls");
				printf("%s\n",opcionElegida);
				printf("LATAM: $%.2f\n",resultadoLatam);
				printf("Aerolineas: $%.2f\n\n", resultadoAerolineas);
				system("pause");
				break;
			case 'e':
				system("cls");
				printf("%s\n",opcionElegida);
				printf("Diferencia: $%.2f\n\n",resultadoLatam);
				system("pause");
				break;
			}
			break;
			case 5:
				system("cls");

				//BIENVENIDO, INGRESE AQUI LOS DATOS PARA LA CARGA FORZADA
				kmIngresados=10600; //KM
				precioLatam=22400; // PRECIO LATAM
				precioAerolineas=19700;// PRECIO AEROLINEAS

				printf("Distancia de vuelo: %.2fKm\n\n", kmIngresados);
				printf("LATAM: $%.2f\n\n", precioLatam);
				resultadoLatam=CalcularDebito(precioLatam);
				printf("  Precio con tarjeta de debito: $%.2f\n", resultadoLatam);
				resultadoLatam=CalcularCredito(precioLatam);
				printf("  Precio con tarjeta de credito: %.2f\n", resultadoLatam);
				resultadoLatam=CalcularBitcoin(precioLatam);
				printf("  Precio pagando con bitcoin: %.10f\n", resultadoLatam);
				resultadoLatam=CalcularPrecioKm(precioLatam, kmIngresados);
				printf("  Precio unitario: $%.2f\n\n", resultadoLatam);
				printf("----------------------------------------------\n\n");
				printf("Aerolineas: $%.2f\n\n", precioAerolineas);
				resultadoAerolineas=CalcularDebito(precioAerolineas);
				printf("  Precio con tarjeta de debito: $%.2f\n", resultadoAerolineas);
				resultadoAerolineas=CalcularCredito(precioAerolineas);
				printf("  Precio con tarjeta de credito: $%.2f\n", resultadoAerolineas);
				resultadoAerolineas=CalcularBitcoin(precioAerolineas);
				printf("  Precio pagando con bitcoin: $%.10f\n", resultadoAerolineas);
				resultadoAerolineas=CalcularPrecioKm(precioAerolineas,kmIngresados);
				printf("  Precio unitario: $%.2f\n\n", resultadoAerolineas);
				resultadoLatam=CalcularDiferencia(precioLatam, precioAerolineas);
				printf("La diferencia de precio es: $%.2f\n\n\n", resultadoLatam);
				system("pause");
				break;
	}

	system("cls");

}while(opcionIngresada!=6);

printf("El programa se cerrara\n\n");
system("pause");

}

