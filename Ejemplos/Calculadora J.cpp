/*
Autor: Joan Emmanuel Flores Castell de Oro
Fecha: 14 de Agosto 2019

Objetivo: Programa para una calculadora sencilla

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

    float d,e,r,t;
    char a;
    int b,c;

  printf ("¿Que operacion quiere realizar? (suma=s/resta=r/multiplicacion=m/division=d/raiz=o)\nR=");
  scanf ("%c",&a);

  switch (a){
    case 's':
        printf("Introdusca sus numero a sumar\n1.");
        scanf(" %d",&b);
        printf("2.");
        scanf("  %d",&c);
        printf("Su resultado de la suma es:%d",b+c);
        break;
     case 'r':
        printf("Introdusca sus numero a restas\n1.");
        scanf(" %d",&b);
        printf("2.");
        scanf("  %d",&c);
        printf("Su resultado de la resta es:%d",b-c);
        break;
     case 'm':
        printf("Introdusca sus numero a multiplicar\n1.");
        scanf(" %d",&b);
        printf("2.");
        scanf("  %d",&c);
        printf("Su resultado de la multiplicasion es:%d",b*c);
        break;
     case 'd':
        printf("Introdusca sus numero a dividir\n1.");
        scanf(" %f",&d);
        printf("2.");
        scanf("  %f",&e);
        r=d/e;
        printf("Su resultado de la division es:%.2f",r);
        break;
     case 'o':
        printf("Introdusca su numero a sacar raiz cuadrada\n1.");
        scanf(" %d",&b);
        printf("Su resultado de la raiz cuadrada es:%.3f",sqrt(b));
        break;
  }
}
