//programa 1 datos de bienvenida Con variables Entrada y salida de datos


#include <stdio.h>

int main()
{//inicia funcion principal
	//declaracion de variables : Un avariable es un valor asigando en memoria "="
	 int numero1=100;//variable incializada lleva valor de tipo entero int  %i
	 float saldo=10.2;//variable incializada lleva valor de tipo decimal float %f
	 char letra='A';//variable incializada lleva valor de tipo caracter char  %c   %s 
     char nombre [20]="Beto";//arreglo incializado lleva valores de tipo string %s

     //imprimir datos de bienvenida
	 printf("\nVariable tipo entero : %i",numero1);
	 printf("\nVariable tipo decimal : %f",saldo);
	 printf("\nVariable tipo un caracter : %c",letra);
	 printf("\nVariable tipo string : %s",nombre);
	  

	
}//termina funcion princpal