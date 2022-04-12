#include "Calculos.h"

float CalcularDebito (float precioBruto){
	float descuento;
	float precioFinal;

	descuento=precioBruto*10/100;
	precioFinal=precioBruto-descuento;

	return precioFinal;
}

float CalcularCredito (float precioBruto){
	float interes;
	float precioFinal;

	interes=precioBruto*25/100;
	precioFinal=precioBruto+interes;

	return precioFinal;
}

float CalcularBitcoin (float precioPesos){
	float precioBitcoin;

	precioBitcoin=precioPesos/4606954.55;

	return precioBitcoin;
}

float CalcularPrecioKm (float precio, float kilometros){
	float precioUnitario;

	precioUnitario=precio/kilometros;

	return precioUnitario;
}

float CalcularDiferencia (float precio1, float precio2){
	float diferencia;

	diferencia= precio1-precio2;

	return diferencia;
}


