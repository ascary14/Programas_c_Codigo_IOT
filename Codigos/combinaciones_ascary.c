/* 
El siguiente programa se encarga de conseguir el numero de combinaciones n en k 
muestra cada combinacion en orden y sin repetirse
Autor: German Ascary Galindo 
*/

#include <stdio.h>
#include <stdlib.h>

//Aqui declaramos los valores k y n como variables globales
int n = 22;
int k = 7;

//Funcion principal
int main()
{

    printf("el valor de k es %d \n", k);//decimos que valor tiene k
    printf("el valor de k es %d \n", n);//decimos que valor tiene n
    
    int i, j, h, bandera, cont; //declaracion de variables para los ciclos y para asignarles un numero
    bandera = 0;
    cont = 1;

    int arreglo1[k];//declaramos un arreglo de tamaño k son los espacios
    int arreglo2[k];//declaramos un arreglo 2 de tamaño k son los espacios
    

    //llenamos el arreglo 1 con los valores iniciales y el arreglo 2 valores finales

    for (i = 0; i < k; i++)
    {
        arreglo1[i] = i + 1;
        arreglo2[i] = (n - k + 1 + i);
    }
    
    //comenzamos
    printf(" las siguientes son las combinaciones\n");
    printf(" \n");
    //imprimimos el primer valor inicial
    printf("%d -{", cont);
    cont++;
    for (i = 0; i < k; i++)
    {
        printf(" %d ", arreglo1[i]);
        if (i == k - 1)
        {
        }
        else
        {
            printf(",");
        }
    }
    printf(" } \n");

    //nos metemos a un ciclo y salimos cuando la bandera sea 1 (cuando sea la ultima combinacón)
    while (bandera == 0)
    {

        if (arreglo1[k - 1] == n)//si el espacio final es igual a n no hace lo siguiente esto es para cuando recorro los valores por ejemplo 245, 345
        {
        }
        else
        {

            arreglo1[k - 1] = arreglo1[k - 1] + 1;//sumamos un 1 a la ultima posicion y imprimimos la nueva combinacion

            printf("%d -{", cont);
            cont++;
            for (i = 0; i < k; i++)
            {
                printf(" %d ", arreglo1[i]);
                if (i == k - 1)
                {
                }
                else
                {
                    printf(",");
                }
            }
            printf("} \n");
        }


        if (arreglo1[k - 1] == arreglo2[k - 1])
        { //si despues de varios ciclos el ultimo valor es a n nos pasamos al anterior
            for (j = k - 1; j >= 0; j--)
            {//hacemos un ciclo del ultimo al primero 
                if (arreglo1[j - 1] == arreglo2[j - 1])
                {//si es igual a nuestro arreglo 2 que son los ultimos valores nos recorremos al anterior
                }
                else
                {
                    arreglo1[j - 1] = arreglo1[j - 1] + 1;//si no son iguales sumamos 1 al otro valor

                    for (h = j; h < k; h++)
                    {//y los siguientes valen +1 de su anterior 

                        arreglo1[h] = arreglo1[h - 1] + 1;
                    }

                    //impresion
                    printf("%d -{", cont);
                    cont++;
                    for (i = 0; i < k; i++)
                    {
                        printf(" %d ", arreglo1[i]);
                        if (i == k - 1)
                        {
                        }
                        else
                        {
                            printf(",");
                        }
                        //impresion
                    }
                    printf("} \n");
                    j = -1;
                }
            }
        }

//cuando llegamos al primer valor y este sea = a los ultimos valores nos salimos del ciclo ya que es la ultima combinación
        if (arreglo1[0] == arreglo2[0])
        {
            bandera = 1;
        }
    }
}