#include <stdio.h>
#include <stdlib.h>


float pedirNumero();
float calcularAreaCirculo(float radio);

int main()
{
   float soloNumero;
   float soloArea;

   soloNumero=pedirNumero();
   printf("El numero ingresado es %.2f\n",soloNumero);
   printf("---------------------------------\n");
   soloArea=calcularAreaCirculo(soloNumero);
   printf("El area del circulo con ese valor de numero ingresado es %.2f\n",soloArea);



    return 0;
}

float pedirNumero()
{
    float numeroPedido;
    printf("Ingrese numero  ");
    scanf("%f",&numeroPedido);
    return numeroPedido;
}

float calcularAreaCirculo(float radio)
{
    float area;
    area=3.14*radio*radio;
    return area;
}

