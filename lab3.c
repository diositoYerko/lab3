#include <stdio.h>
#include "funcionesParaImprimir.h"
#define n 500

/*Funcion archivo*/
void fArchivo(){

FILE *archivo;
char nombre_archivo[100];
int ciclo=0;
char caracteres[100];

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
printf("\nEl contenido del archivo es \n\n");

	while (feof(archivo) == 0){
 	fgets(caracteres,100,archivo);
 	printf("%s",caracteres);
 	}
}

int main(){
fArchivo();

}
