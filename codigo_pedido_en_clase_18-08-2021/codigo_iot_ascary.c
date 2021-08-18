/*Programa de la clase de Diplomado de internet de las cosas
Galindo Guzman German Ascary
Fecha 18/08/2021
Descripcion
Consiste en asignar un 1 a una secuencia de 0000
la forma de visualizar los 0000 fue en un arreglo de tamaño 4
solamente asigno un 1 a una posicion y borro el 1 asignado anteriormente
hay 2 formas de hacerlo la que hice es borrar la posicion anterior (i-1) la otras es guardar la posicion en un aux y borrar ese aux al asignar uno nuevo
*/
#include <stdio.h>

//Declaramos un metodo que sera nuestro tiempo de espera
void espera(int nanosegundos)
{
     int contador;

    for (contador = 1; contador <= nanosegundos; contador++){
        //como solo recorre hasta llegar a ese tiempo pues no hacemos nada
    }
        
}

int main()
{
    //Declaramos variables
    //para la conversion de nanosegundos a sengundos prefiero multiplicarlo donde a la izquierda es el tiempo en segundos
    int nanosegundos = 0.2 * 100000000;
    //Deje una bandera por si se quiere implementar una salida
    int i, j, aux, bandera;

    //declaramos el arreglo vacio
    int arreglo[4] = {0, 0, 0, 0};
    bandera = 0;
    //empezaremos por la ultima posicion del arreglo
    //tengo 2 opciones si quiero que imprima al inicio 0000 i que sea 4 si quiero que imprima luego luego un 0001 i que sea 3
    i = 3;
    j = 0;
    //lo metemos a un ciclo infinito
    while (1)
    {
        //si i<0 lo cual es 1000 lo volvemos 0000 para volver a empezar 
        if (i < 0)
        {
            arreglo[i + 1] = 0;
            i = 3;
        }
        //en cualquier posicion que sea 1
        arreglo[i] = 1;

        //este permite volver 0 a los anteriores
        if (i < 4)
        {
            arreglo[i + 1] = 0;
        }

        i--;
        //imprimimos arreglo y llamamos al metodo espera 
        for (j = 0; j < 4; j++)
        {
            printf("%d ", arreglo[j]);
            espera(nanosegundos);
        }
        //un salto de linea para que no esten juntos
        printf("\n");
    }

    return 0;
}