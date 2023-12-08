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
  /*
  printf("\nNumero 1 es: %i  ",num1);
  printf("\nNumero 2 es: %i  ",num2);
  printf("\nSuma es: %i ",sumaR);
  */
  printf("\nNumero 1 es: %i \nNumero 2 es: %i \nSuma es: %i ",num1,num2,sumaR);
  
  //Determinar si la suma es mayor a 6 indicar aprobado en caso contrario reprobado
  if(sumaR>=6)
  {//incia if para condicion verdadera
  	printf("\nAprobado");
  }//termina if para condicion verdadera
  else
  {//para condicion falsa
  	printf("\nREprobado");
  }//para condicion falsa
  
}//termina funcion princpal