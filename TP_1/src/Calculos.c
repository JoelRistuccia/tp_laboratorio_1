#include "Calculos.h"
#include <string.h>

float sumar (float num1, float num2){
	float suma;

	suma= num1+num2;

	return suma;
}

float restar (float num1, float num2){
	float diferencia;

	diferencia= num1-num2;

	return diferencia;
}

float dividir (float num1, float num2){
	float cociente;

	cociente= num1/num2;

	return cociente;
}


float multiplicar (float num1, float num2){
	float producto;

	producto= num1*num2;

	return producto;
}


int calcularTodo (float precio1, float precio2, float kilometros, float *debito1, float *credito1,
	float *bitcoin1, float *unitario1, float *debito2, float *credito2, float *bitcoin2, float *unitario2,
	float *resta){

	int retorno=-1;

	float auxDebito1, auxCredito1, auxBitcoin1, auxUnitario1;
	float auxDebito2, auxCredito2, auxBitcoin2, auxUnitario2;
	float auxDiferencia;

	if(debito1!=NULL && credito1!=NULL &&	bitcoin1!=NULL && unitario1!=NULL && debito2!=NULL &&
		credito2!=NULL && bitcoin2!=NULL && unitario2!=NULL && resta!=NULL){

		auxDebito1=multiplicar(precio1, 10)/100;
		auxDebito1=precio1-auxDebito1;
		auxCredito1=multiplicar(precio1, 25)/100;
		auxCredito1=precio1+auxCredito1;
		auxBitcoin1=dividir(precio1, 4606954.55);
		auxUnitario1=dividir(precio1, kilometros);
		auxDebito2=multiplicar(precio2, 10)/100;
		auxDebito2=precio2-auxDebito2;
		auxCredito2=multiplicar(precio2, 25)/100;
		auxCredito2=precio2+auxCredito2;
		auxBitcoin2=dividir(precio2, 4606954.55);
		auxUnitario2=dividir(precio2, kilometros);

		if(precio1>precio2){
			auxDiferencia= restar(precio1, precio2);
		}
		else{
			auxDiferencia= restar(precio2, precio1);
		}
		retorno=0;

		*debito1=auxDebito1;
		*credito1=auxCredito1;
		*bitcoin1=auxBitcoin1;
		*unitario1=auxUnitario1;
		*debito2=auxDebito2;
		*credito2=auxCredito2;
		*bitcoin2=auxBitcoin2;
		*unitario2=auxUnitario2;
		*resta=auxDiferencia;

	}

	return retorno;
}


