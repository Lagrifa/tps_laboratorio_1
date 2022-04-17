#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void)
{	//Declaracion de variables
	setbuf(stdout, NULL);
	int opcion;
	float kilometros;
	float precioLatam;
	float precioAerolineas;
	float bitcoin;
	bitcoin = 4606954.55;

	do
	{
	//1,2)Ingreso de kilometros y precios con validacion.
		printf("Ingrese kilometros: ");
		scanf("%f", &kilometros);
		while(kilometros < 1)
		{
			printf("ERROR solamente numeros a partir de 1, reingrese kilometros: ");
			scanf("%f", &kilometros);
		}
		printf("\nIngrese el precio de LATAM: ");
		scanf("%f" , &precioLatam);
		while(precioLatam < 1)
		{
			printf("\nERROR solamente numeros a partir de 1, reingrese el precio de LATAM: ");
			scanf("%f" , &precioLatam);
		}
		printf("\nIngrese el precio de AEROLINEAS: ");
		scanf("%f" , &precioAerolineas);
		while(precioAerolineas < 1)
		{
			printf("\nERROR solamente numeros a partir de 1, reingrese el precio de AEROLINEAS: ");
			scanf("%f" , &precioAerolineas);
		}

	//llamada de las funciones.
		calcularCostos(bitcoin, kilometros, precioLatam, 1);
		printf("\n");
		calcularCostos(bitcoin, kilometros, precioAerolineas, 0);
		printf("\n");
		calculoDiferenciaPrecios(precioAerolineas, precioLatam);
		printf("\n");
		printf("\n¿desea ingresar otra comparacion? (1=si otro=no): ");
		scanf("%d" , &opcion);

	}
	while(opcion == 1);
	printf("\n---FIN DEL PROGRAMA---");
	return EXIT_SUCCESS;
}





