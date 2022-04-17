/*
Biblioteca dedicada a contener las opciones del menu principal y los submenus
 */

#ifndef ABRIRMENUS_H_
#define ABRIRMENUS_H_
/// @brief Imprime el menu principal junto con los valores de las variables que ingresa el usuario
/// @param kmIngresados recibe 1 numero tipo float
/// @param precioAerolineas recibe 1 numero tipo float
/// @param precioLatam recibe 1 numero tipo float
void AbrirMenuPrincipal (float kmIngresados, float precioAerolineas, float precioLatam);
///
/// @brief Imprime el submenu de la opcion 3
void AbrirOpcion3 (void);
/// @brief Imprime los resultados de todas las operaciones realizadas en la opcion 3 del programa
/// @param precio1 recibe una variable tipo float
/// @param precio2 recibe una variable tipo float
/// @param kilometros recibe una variable tipo float
/// @param debito1 recibe una variable tipo float
/// @param credito1 recibe una variable tipo float
/// @param bitcoin1 recibe una variable tipo float
/// @param unitario1 recibe una variable tipo float
/// @param debito2 recibe una variable tipo float
/// @param credito2 recibe una variable tipo float
/// @param bitcoin2 recibe una variable tipo float
/// @param unitario2 recibe una variable tipo float
/// @param resta recibe una variable tipo float
/// @return -1 si hubo error, 0 si salio ok
int informarResultados (float precio1, float precio2, float kilometros, float debito1, float credito1,
		float bitcoin1, float unitario1, float debito2, float credito2, float bitcoin2, float unitario2,
		float resta);
/// @brief Realiza todos los calculos requeridos por el programa e imprime los resultados en un submenu
/// @param kilometros recibe una variable tipo float
/// @param precio1 recibe una variable tipo float
/// @param precio2 recibe una variable tipo float
/// @param mensajeError Mensaje de error
/// @param resultado1 recibe un puntero a una variable tipo float
/// @param resultado2 recibe un puntero a una variable tipo float
/// @return -1 si hubo error, 0 si salio ok
int CargaForzada (float kilometros, float precio1, float precio2, char mensajeError[],
	float* resultado1,float* resultado2 );


#endif /* ABRIRMENUS_H_ */
