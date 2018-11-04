#include <stdio.h>
#include "funcionesParaImprimir.h"
#define n 500

/*Funcion archivo*/
void fArchivo(){

FILE *archivo;
char nombre_archivo[1000];
int ciclo=0;

printf("Ingrese nombre archivo: ");

	while(ciclo==0){
	scanf("%s",nombre_archivo);
	archivo = fopen(nombre_archivo,"r");
		if(archivo==NULL){
		printf("Ingrese nombre archivo: ");
		}
		else{
		break;
		}	
	}
printf("\nPrueba de que el archivo se ha leido correctamente.\n");
}

int main(){
fArchivo();

}
