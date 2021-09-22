/*
 * utn.h
 *
 *  Created on: 13 sep. 2021
 *      Author: USR
 */

//Acá van los headers o los "encabezados" de las funciones creadas en utn.c

#ifndef UTN_H_
#define UTN_H_

int menu (float numeroA, float numeroB);
int opcionElegida (int opcion);
int errorOpcion (int opcion);
float sumar (float operandoA, float operandoB);
float restar (float operandoA, float operandoB);
float multiplicar (float operandoA, float operandoB);
float dividir (float *pDivision, float operandoA, float operandoB);
int factorizar (float operandoA);


#endif /* UTN_H_ */
