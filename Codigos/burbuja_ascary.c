#include <stdio.h>

#include<stdio.h>
#define Taman 5
void mostrarLista(int*);
int main(int argc, char** argv){
	int arreglo[Taman]={14,3,40,8,34};
	int i,clave,j;
   //Recorremos el arreglo
	for (i = 1; i < Taman; i++){	   
		clave = *(arreglo+i);
		j = i-1;
		//Comparamos el primer valor 
		while (j >= 0 && *(arreglo+j) > clave){
			//Insertar el valor donde corresponda
			*(arreglo+j+1) = *(arreglo+j);
			j = j-1;
		}
		*(arreglo+j+1) = clave;
		mostrarLista(arreglo);
	}    
	mostrarLista(arreglo);  
	return 0;
}
//Función para mostrar estado de la lista
void mostrarLista(int *lista){
	int i;
	for (i=0; i< Taman; i++){
		printf("%d, ",*(lista+i));
	}
	printf("\n");;
   
}
