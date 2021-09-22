/*
 * utn.c
 *
 *  Created on: 13 sep. 2021
 *      Author: USR
 */

//Ac� van las funciones creadas, con su c�digo

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief funci�n que se encarga de sumar
 * @param A Es el primer numero que se pide para la operaci�n (float)
 * @param B Es el segundo numero que se pide para la operaci�n (float)
 * @return el resultado de la suma (float)
 */

float sumar (float operandoA, float operandoB)
{
	float suma;

	suma= operandoA + operandoB;
	return suma;
}

/**
 * @brief funci�n que se encarga de restar
 * @param A Es el primer numero que se pide para la operaci�n (float)
 * @param B Es el segundo numero que se pide para la operaci�n (float)
 * @return el resultado de la resta (float)
 */

float restar (float operandoA, float operandoB)
{
	float resta;

	resta= operandoA - operandoB;

	return resta;
}

/**
 * @brief funci�n que se encarga de multiplicar
 * @param A Es el primer numero que se pide para la operaci�n (float)
 * @param B Es el segundo numero que se pide para la operaci�n (float)
 * @return el resultado de la multiplicacion (float)
 */

float multiplicar (float operandoA, float operandoB)
{
	float multiplicacion;

	multiplicacion = operandoA * operandoB;

	return multiplicacion;
}

/**
 * @brief funci�n que se encarga de dividir.
 * @param A es el puntero que se encargar� de direccionar a donde se almacena el resultado de la operaci�n
 * @param B Es el primer numero que se pide para la operaci�n (float)
 * @param C Es el segundo numero que se pide para la operaci�n (float)
 * @return el estado de la divisi�n. (int)
 */

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

/**
 * @brief funci�n que se encarga de factorizar
 * @param A Es el numero que se pide para la operaci�n (float)
 * @return el resultado de la factorizaci�n (int)
 */


int factorizar (float operando)
{
	int acumuladorFactorial=1;

		for(;operando>=1;operando--)
		{
			acumuladorFactorial= acumuladorFactorial * (int)operando;
		}

	return acumuladorFactorial;
}

/**
 * @brief funci�n que muestra el men� de opciones
 * @param A Es el primer numero que ingresa el usuario (float)
 * @param B Es el segundo numero que ingresa el usuario (float)
 * @return 0
 */


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

/**
 * @brief funci�n que marca la opci�n elegida
 * @param A el n�mero de opci�n que elige el usuario (int)
 * @return el n�mero de opci�n que ser� ejecutado (int)
 */


int opcionElegida (int opcion)
{
	int eleccion;

		printf("Por favor, seleccione una opci�n del men� \n");
		scanf("%d", &eleccion);

	return eleccion;
}

/**
 * @brief funci�n que pide validar de nuevo la opci�n mal elegida
 * @param A opci�n elegida por el usuario (int)
 * @return la opci�n vuelta a elegir por el usuario que corta el bucle del while
 */

int errorOpcion (int opcion)
{
	int chance;
	float numeroA=0;
	float numeroB=0;

	while (opcion<1 || opcion>5)
	 {
		 printf("ERROR. Elija de nuevo una opci�n del 1 al 5 \n");
		 menu(numeroA, numeroB);
		 chance= opcionElegida(chance);
	 }

	return chance;
}





