/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>


int maximo(int vector[]){
    int i,max;
    max=vector[0];
    for (int i = 0; i < 5; i++) {
        if (vector[i]>max)
            max=vector[i];
    }
    return max;
}

int minimo(int vector[]){
    int i,min;
    min=vector[0];
    for (int i = 0; i < 5; i++) {
        if (vector[i]<min)
            min=vector[i];
    }
    return min;
}

int divisible(int vector[]){
    int i,min,contador;
    contador=0;
    for (int i = 0; i < 5; i++) {
        if (vector[i]%3==0)
            contador++;
    }
    return contador;
}

float media(int vector[]){
    int i,suma;
    suma=0;
    double media;
    for (int i = 0; i < 5; i++) {
        suma+=vector[i];
    }
    media=suma/5;
    return media;
}

void ordenarlo_pares(int vector[]){
    int aux;
    for (int i = 0; i < 5; i++) {
        for (int i = 0; i < 5; i++) {
            if (vector[i]>vector[i+1]){ 
                aux=vector[i];
                vector[i]=vector[i+1];
                vector[i+1]=aux;
            }
        }
    }
    for (int i=0;i<5;i++){ 
        if (vector[i]%2==0){
        printf("\n array[%d]=%d",i,vector[i]);
        }
    }
}
void ordenarlo_impares(int vector[]){
    int aux;
    for (int i = 0; i < 5; i++) {
        for (int i = 0; i < 5; i++) {
            if (vector[i]>vector[i+1]){ 
                aux=vector[i];
                vector[i]=vector[i+1];
                vector[i+1]=aux;
            }
        }
    }
    for (int i=0;i<5;i++){ 
        if (vector[i]%2==1){
        printf("\n array[%d]=%d",i,vector[i]);
        }
    }
}


int main()
{
    int vector[5]={1,6,2,8,3};
    printf("Numero mayor es: %d", maximo(vector));
    printf("\nNumero minimo es: %d", minimo(vector));
    printf("\nHay %d numeros divisibles entre 3", divisible(vector));
    printf("\nLa media de el vector es %f \n", media(vector));
    printf("Mostrando vector pares\n");
    ordenarlo_pares(vector);
    printf("\nMostrando vector impares\n");
    ordenarlo_impares(vector);

    

}
