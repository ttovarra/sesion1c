//programa 3 Estructura de control selectiva switch evalua una varible
//estructura de control do-while Realiza y ejecuta un proceso hasta que se cumpla condicion
//definicion d euna funcion es un miniprogama, modulo, subrograma 
#include <stdio.h>
#include <windows.h>

//funcion vacia calcular area cuadrado
void areaCuadradoF()
{
	system ("color 0a");
	float lado,areaCuadrado;
	printf("\nCaptura valor de lado:");scanf("%f",&lado);
	areaCuadrado=lado*lado;
	printf("\nArea cuadrado es: %.2f ",areaCuadrado);
}//termina fucion area Cuadrado

//funcion vacia calcular area circulo
void areaCirculoF()
{
	system ("color 0b");
	float radio,areaCirculo;
	printf("\nCaptura valor el radio:");scanf("%f",&radio);
	areaCirculo=3.1416*radio*radio;
	printf("\nArea circulo es: %.2f ",areaCirculo);
}//termina funcion area Circulo


int main()
{//inicia funcion principal
     //menu ciclico
     char menu;
     do{//inicia do
		     printf("\n\nMenu \nC.- Area cuadrado\nQ.- Area Circulo\nS.- Salir\n");
		     
		     scanf("%s",&menu);
		     system("cls");//limpiar pantalla
		     switch(menu)
		     {//inicia switch
		     	case 'C': case 'c':printf("\nModulo area cuadrado\n");areaCuadradoF(); break;
		     	case 'Q': case 'q':printf("\nModulo area circulo\n");areaCirculoF(); break;
		     	case 'S': case 's':printf("\nFinalizo programa\n"); break;
		     	default: printf("\nOpcion invalida, solo tengo, 1,2,3 \n");break;
			 }//termina switch	
	 }while((menu!='S')&&(menu!='s'));//termina do-while

}//termina funcion principal

