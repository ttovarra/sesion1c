//Programa 2 Entrada y salida de datos

#include <stdio.h>

int main()
{//inicia funcion principal
  //declaracion de variables 
  char nombre [20];//arreglo tipo cadena de caracteres
  int num1,num2;//variables tipo entero
  
  printf("Cual es tu nombre: ");//imprime
  scanf("%s",&nombre);
  printf("Escribe numero 1 en entero: ");//imprime
  scanf("%i",&num1);
  printf("Escribe numero 2 en entero: ");//imprime
  scanf("%i",&num2);
  printf("Bievenido Usuario %s:  ",nombre);
  
  int sumaR=num1+num2;
  
  printf("Numero 1 es %i : ",num1);
  printf("Numero 2 es %i : ",num2);
  printf("Suma es %i : ",sumaR);
   

}//termina funcion princpal