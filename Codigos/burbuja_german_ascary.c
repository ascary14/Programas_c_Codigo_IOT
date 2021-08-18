#include<stdio.h>

 //Contruimos el arreglo vacio

int i,j,aux;
 
int main(){
    //escribimos el arreglo desordenado
int arreglo[5]={14,3,40,8,34};

 
	for(i=1; i<5; i++)
	{
		for(j=0; j<5-i; j++)
		{
			if(arreglo[j]>arreglo[j+1])
			{
                //cambiamos valores
			    aux    = arreglo[j+1];
                printf("\n el nuemro %d vale ahora %d ",arreglo[j+1],arreglo[j]);
				arreglo[j+1] = arreglo[j];
                 printf("\n Y el nuemro %d vale ahora %d ",arreglo[j] ,aux);
				arreglo[j]   = aux;
			}
		}
	}
    printf("\n \n El arreglo ordenado queda asi:\n ");

	for(i=0;i<5;i++)
	{
		printf("%d " ,arreglo[i]);
	}
    printf("\n");
	return 0;
}