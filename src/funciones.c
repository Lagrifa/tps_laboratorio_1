/*
 * funciones.c
 *
 *  Created on: 12 abr. 2022
 *      Author: Ezequiel
 */
#include <stdio.h>
#include <stdlib.h>

void calcularCostos(float btc, float km, float valor, float aerolinea)
{
	//Resolucion de calculos
	float deb = valor - (valor * 0.10);//debito(10% descuent0)
	float cred = (valor * 0.25) + valor;//credito(25%interes)
	float valorBtc = valor / btc;//cuanto de bitcoin en pesos
	float valorKm = valor / km;

	//Imprime resultados
	if(aerolinea == 0)
	{
		printf("\nPrecio AEROLINEAS: $ %.2f" , valor);
	}
	else
	{
		printf("\nPrecio LATAM: $ %.2f", valor);
	}

	printf("\nA)Precio con tarjeta de debito: $ %.2f", deb);
	printf("\nB)Precio con tarjeta de credito: $ %.2f", cred);
	printf("\nC)Precio pagando con bitcoin: %f BTC", valorBtc);
	printf("\nD)Precio unitario: $ %.2f", valorKm);

}

void calculoDiferenciaPrecios(float precioA, float precioL)
{
	float mayor, menor, resultDif;
	if(precioL > precioA)
	{
		mayor = precioL;
		menor = precioA;
	}
	else
	{
		mayor = precioA;
		menor = precioL;
	}
	resultDif = mayor - menor;
	printf("\nLa diferencia de precio es: $%.2f", resultDif);
}
