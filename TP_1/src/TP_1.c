/*
 ============================================================================
 Name        : TP_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

#include "utn.h"

int main(void)
{
	setbuf(stdout, NULL);

	int opcion;
	float numeroA=0;
	float numeroB=0;
	float suma;
	float resta;
	float division;
	int estado;
	float multiplicacion;
	int factorialA;
	int factorialB;
	char continuar= 'y';
	int flagA=0;
	int flagB=0;
	int flagRespuesta=0;


	//float operacion;


	//Opciones del menú
		menu(numeroA, numeroB);

		while (continuar !='n')
		{
			//Elijo opcion a realizar del menú


					opcion= opcionElegida (opcion);

					if (opcion<1 || opcion>5)
					{
						errorOpcion (opcion);
					}


				switch (opcion)
				{
						case 1:
							printf("\n Ingresar 1er operando (A=x) \n");
							scanf("%f", &numeroA);
							menu(numeroA, numeroB);
							flagA=1;
							break;

						case 2:
							printf("\n Ingresar 2do operando (B=y) \n");
							scanf("%f", &numeroB);
							menu(numeroA, numeroB);
							flagB=1;
							break;

						case 3:
							while(flagA != 1 && flagB !=1)
							{
								printf("ERROR. ingrese el primer y/o segundo operando \n");
								opcion=opcionElegida(opcion);
								if(opcion==1)
								{
									flagA=1;
								}
								if (opcion==2)
								{
									flagB=1;
								}
							}

								suma = sumar(numeroA, numeroB);

								resta = restar (numeroA, numeroB);

								multiplicacion = multiplicar (numeroA, numeroB);

								estado= dividir (&division, numeroA, numeroB);

								factorialA = factorizar (numeroA);

								factorialB = factorizar (numeroB);

								flagRespuesta=1;

						break;

						case 4:
							while(flagRespuesta!=1)
							{
								printf("ERROR. calcule las operaciones primero\n");
								opcion= opcionElegida(opcion);
									if (opcion==3)
									{
										flagRespuesta=1;
									}

							}
								printf("El resultado de %.2f + %.2f es: %.2f \n", numeroA, numeroB, suma);


								printf("El resultado de %.2f - %.2f es: %.2f\n",numeroA, numeroB, resta);


								printf("El resultado de %.2f * %.2f es: %.2f\n", numeroA, numeroB, multiplicacion);


								if (estado!=0)
								{
									printf("ERROR. No se puede dividir por cero \n");
							    }
								else
								{
									printf("El resultado de %.2f / %.2f es: %.2f \n", numeroA, numeroB, division);
								}


								if (numeroA>0)
								{
									printf("El resultado de %.2f es: %d\n", numeroA, factorialA);
								}
								else
								{
									printf("No se puede hacer la operación con numeros negativos o con decimales \n");
								}


								if (numeroB>0)
								{
									printf("El resultado de %.2f es: %d\n", numeroB, factorialB);
								}
								else
								{
									printf("No se puede hacer la operación con numeros negativos o con decimales \n");
								}
							break;


						case 5:
							 continuar='n';
							 printf("Adios, y gracias por usar este programa :D \n");
							 break;

					}

		}//Fin while

	return EXIT_SUCCESS;
}
