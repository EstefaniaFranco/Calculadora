#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define CLEAR system("cls")
#define MENSAJE_ERROR printf("---------------- ERROR! -----------------\n\n Debe ingresar los valores primero.\n\n");

int main()
{
    int continuar=1;
    int opcion;
    float numero1=0;
    float numero2=0;
    int flagA=0;
    int flagB=0;


    while(continuar==1)
    {
        printf("\n-------- ELIJA LA OPCION DESEADA --------\n\n");
        printf("1- Ingresar 1er operando (A=%.2f)\n", numero1);
        printf("2- Ingresar 2do operando (B=%.2f)\n", numero2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                CLEAR;
                numero1= pedir_numero1();
                flagA=1;
                break;
            case 2:
                CLEAR;
                numero2= pedir_numero2();
                flagB=1;
                break;
            case 3:
                CLEAR;
                if(flagA && flagB)
                {
                    suma(numero1, numero2);
                }
                else
                {
                    MENSAJE_ERROR;
                }
                break;
            case 4:
                CLEAR;
                 if(flagA && flagB)
                 {
                    resta (numero1, numero2);
                 }
                 else
                 {
                    MENSAJE_ERROR;
                 }
                break;
            case 5:
                CLEAR;
                if(flagA && flagB)
                 {
                    division (numero1, numero2);
                 }
                 else
                 {
                     MENSAJE_ERROR;
                 }
                break;
            case 6:
                CLEAR;
                if(flagA && flagB)
                 {
                    multiplicacion (numero1, numero2);
                 }
                 else
                 {
                     MENSAJE_ERROR;
                 }
                break;
            case 7:
                CLEAR;
                if(flagA)
                 {
                    factorial (numero1);
                 }
                 else
                 {
                    MENSAJE_ERROR;
                 }
                break;
            case 8:
                CLEAR;
                if(flagA && flagB)
                 {
                    suma(numero1, numero2);
                    resta(numero1, numero2);
                    division(numero1, numero2);
                    multiplicacion(numero1, numero2);
                    factorial(numero1);
                 }
                 else
                 {
                     MENSAJE_ERROR;
                 }
                break;
            case 9:
                CLEAR;
                continuar=0;
                break;
            default:
                CLEAR;
                printf("Opcion invalida.\n\n");
                break;
        }
    }
    return 0;
}
