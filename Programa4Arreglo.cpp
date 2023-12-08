//programa 4 arreglos contratamiento for
//un arreglo es un tipo de dato abstracto que almacena valores de un mismo tipo de dato
//estructuura de control for es de tipo ciclica, repite, el nuemro de vecces determinada una condicion
#include <stdio.h>
#include <windows.h>





int main()
{//inicia funcion principal
       //declaracion de arreglo unidimensional incializado (lleva valores)
       //int arregloCantidades[5] = {100,250,20,50,0};
       //declaracion de arreglo unidimensional indefinido capturar valores
       
       int arregloCantidades[5];
       for(int contador=0;contador<=4;contador++)
       {
       	printf("\nCaptura cantidad de producto [%i] :",(contador+1));
       	scanf("%i",&arregloCantidades[contador]);
	   }//termina for para capturar
       
       
       //imprimir los valores del arreglo con for
       for(int contador=0;contador<=4;contador++)
       {//inica for
       	printf("\nProducto [%i] cantidad es %i: ",(contador+1),arregloCantidades[contador]);
	   }//termina for


}//termina funcion principal