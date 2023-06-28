/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void ascenso(int dni, char rango);
void media();

int main()
{
    int dni;
    char rango[99];
    printf("\n Dime el DNI del soldado quieres ascender?: ");
    scanf("%d", &dni);
    printf("\n A que rango lo quieres ascender? ");
    scanf("%s", rango);
    ascenso(dni, rango);
    
    media();
}

void ascenso(int dni, char *rango){
    struct soldados *aux=NULL;
    aux=cabecera;
    while (aux != NULL && aux->dni == dni){
        aux->saldo+=214;
        aux->rango=rango;
        if aux->oficial==0
            aux->oficial=1;
        aux=aux->sig;
    }
    if (aux!=NULL)
        printf("Datos realizados");
    else
        printf("El DNI no ha sido econtrado");
}

void media(){
    struct numeros *aux;
    aux=principio;
    int diferencia,contador_no_oficiales,contador_oficiales,acumulador_no_oficiales, acumulador_oficiales;
    float media_no_oficiales, media_oficiales;
    contador=0;
    while (aux!=NULL){
        if (aux->oficial==0){//no oficial
            acumulador_no_oficiales+=aux->saldo;
            contador_no_oficiales++;
        }
        else{
            acumulador_oficiales+=aux->saldo;
            contador_oficiales++;
        }
    aux=aux->sig;
    }
    media_no_oficiales=acumulador_no_oficiales/contador_no_oficiales;
    media_oficiales=acumulador_oficiales/contador_oficiales;
    printf("La media de los no oficiales es de :%f", media_no_oficiales);
    printf("La media de los oficiales es de :%f", media_oficiales);
    diferencia=media_no_oficiales - media_oficiales;
    printf("La diferencia de sueldo es de %d",diferencia);
}
