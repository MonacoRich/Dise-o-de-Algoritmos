// sentencia switch para menu de comida entre cuatro opciones

#include<stdio.h>


int main(){
	int numero; //se define la variable de tipo entero
	
	printf("\nDigita un numero entre (1 - 4), para elegir el menu de comida que mas te guste: ");
	printf("\n1: Hamburguesa");  //menu con las opciones
	printf("\n2: Club Sandwithc");
	printf("\n3: Pizza");
	printf("\n4: Burrito con frijoles \n");
	printf("Digita la opcion que deseas ordenar: ");
	scanf("%i",&numero); //se registra la opcion de tipo entero
	
	
	switch(numero){
		case 1: printf("\nUsted eligio Hamburguesa\nBuen provecho!");break;
		case 2: printf("\nUsted eligio Club Sandwithc\nBuen provecho!");break;
		case 3: printf("\nUsted eligio Pizza\nBuen provecho!");break;
		case 4: printf("\nUsted eligio Burrito con frijoles\nBuen provecho! ");break;
		default: printf("usted no ha digitado un numero correcto. "); //mensja informando opcion no valida
	}
	
	
	return 0;
}