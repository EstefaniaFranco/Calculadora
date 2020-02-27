#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

 /** \brief Pide al usuario al usuario que ingrese un numero y valida que el dato sea numerico.
 * \param ()
 * \return el numero ingresado por el usuario.
 */
float pedir_numero1()
{
    float a;
    int i=1;

    while (i==1)
    {
         printf("\n Ingrese el 1er operando: \n");
         if  (scanf("%f", &a)==1)
        {
            break;
        }
        fflush(stdin);

        printf ("---------------- ERROR! -----------------\n\n");
    }
    return a;
}

/** \brief Pide al usuario que ingrese un numero y valida que el dato sea numerico.
 * \param ()
 * \return el numero ingresado por el usuario.
 */
float pedir_numero2()
{
    float b;
    int i=1;

    while (i==1)
    {
         printf("\n Ingrese el 2do operando: \n");
         if  (scanf("%f", &b)==1)
        {
            break;
        }
        fflush(stdin);

        printf ("\n---------------- ERROR! -----------------\n\n");
    }
    return b;
}

/** \brief Suma los numeros ingresados e imprime en pantalla el resultado.
 * \param float a, ingresado previamente por el usuario.
 * \param float b, ingresado previamente por el usuario.
 * \return void
 */
void suma(float a, float b)
{
    float resultado;
    resultado = a + b;
    printf("\nEL RESULTADO DE A+B ES: %.2f\n", resultado);
}

/** \brief Resta los numeros ingresados e imprime en pantalla el resultado.
 * \param float a, numero ingresado previamente por el usuario.
 * \param float b, numero ingresado previamente por el usuario.
 * \return void
 */
void resta(float a, float b)
{
     float resultado;
     resultado = a - b;
     printf("\nEL RESULTADO DE A-B ES: %.2f\n", resultado);
}

 /** \brief Divide los ingresados (A/B) e imprime en pantalla el resultado.
 * \param float a, ingresado previamente por el usuario.
 * \param float b, ingresado previamente por el usuario.
 * \return void
 */
void division(float a, float b)
{
    float resultado;
    if (b == 0)
    {
        printf("\n---------------- ERROR! -----------------\n\n El divisor debe ser distinto a 0.\n");
    }
    else
    {
        resultado = a / b;
        printf("\nEL RESULTADO DE A/B ES: %.2f\n", resultado);
    }
}

 /** \brief Multiplica los numeros ingresados e imprime en pantalla el resultado.
 * \param float a, ingresado previamente por el usuario.
 * \param float b, ingresado previamente por el usuario.
 * \return void
 */
void multiplicacion(float a, float b)
{
    float resultado;
    resultado= a * b;
    printf("\nEL RESULTADO DE A*B ES: %.2f\n", resultado);
}

 /** \brief Calcula eel factorial(!) de A e imprime en pantalla el resultado.
 * \param float a, ingresado previamente por el usuario.
 * \return void
 */
void factorial(float a)
{
    int entero= (int)a;
    int factor=1;
    float i;

    if(a<0 || a!=entero)
    {
        printf("\n---------------- ERROR! -----------------\n\n Debe ingresar un numero entero positivo.\n");
    }
    else
    {
        if (a==0)
        {
            printf("\nEl factorial de %d es: %d\n", entero, factor);
        }
        else
        {
            for(i=1; i<=a; i++)
            {
                factor = factor * i;
            }
            printf("\nEl factorial de %d es: %d\n", entero, factor);
         }

    }
}
