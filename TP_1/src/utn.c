/*
 * utn.c
 *
 *  Created on: 13 sep. 2021
 *      Author: USR
 */

//Acá van las funciones creadas, con su código

#include <stdio.h>
#include <stdlib.h>

float sumar (float operandoA, float operandoB)
{
	float suma;

	suma= operandoA + operandoB;
	return suma;
}

float restar (float operandoA, float operandoB)
{
	float resta;

	resta= operandoA - operandoB;

	return resta;
}

float multiplicar (float operandoA, float operandoB)
{
	float multiplicacion;

	multiplicacion = operandoA * operandoB;

	return multiplicacion;
}

float dividir (float *pDivision, float operandoA, float operandoB)
{
	int retorno=0;

	if(operandoB!=0)
	{
		float cuenta;
		cuenta= operandoA/ operandoB;
		*pDivision= cuenta;
		retorno=0;
	}
	else
	{
		retorno=1;
	}

	return retorno;
}

int factorizar (float operando)
{
	int acumuladorFactorial=1;

		for(;operando>=1;operando--)
		{
			acumuladorFactorial= acumuladorFactorial * (int)operando;
		}

	return acumuladorFactorial;
}


int menu (float numeroA, float numeroB)
{
	printf("Hola. Bienvenido. Estas son las opciones que puede realizar: \n");
	printf("1) Ingresar 1er operando (A= %.2f) \n", numeroA);
	printf("2) Ingresar 2do operando (B= %.2f) \n", numeroB);
	printf("3) Calcular todas las operaciones \n");
	printf("4) Informar resultados \n");
	printf("5) Salir \n");

	return 0;
}


int opcionElegida (int opcion)
{
	int eleccion;

		printf("Por favor, seleccione una opción del menú \n");
		scanf("%d", &eleccion);

	return eleccion;
}


int errorOpcion (int opcion)
{
	int chance;
	float numeroA=0;
	float numeroB=0;

	while (opcion<1 || opcion>5)
	 {
		 printf("ERROR. Elija de nuevo una opción del 1 al 5 \n");
		 menu(numeroA, numeroB);
		 chance= opcionElegida(chance);
	 }

	return chance;
}





