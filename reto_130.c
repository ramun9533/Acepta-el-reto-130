#include <stdio.h>

void main()

{
    int y1, y2, x1, x2, tamano, area, pasosx, pasosy;

    printf("\n Proporsione el tamaño del area de juego y las cordenadas \n donde desea iniciar, luego las cordenadas donde desea llegar \n");
        printf("\n Proporcione el tamaño del area de juego\n");
        scanf("%d", &tamano);
        printf("\n Proporcione X1\n");
        scanf("%d", &x1);
        printf("\n Proporcione Y1\n");
        scanf("%d", &y1);
        printf("\n Proporcione X2\n");
        scanf("%d", &x2);
        printf("\n Proporcione Y2\n");
        scanf("%d", &y2);
area=tamano*tamano;

if (tamano<y1 || tamano<x1 || tamano<x2 || tamano<x2)
        printf("\n Cordenadas fuera del rango del tamaño del area de juego\n");
        else
        {
if (x1==x2 || y1==y2 )
        printf("\n IMPOSIBLE \n");
        if(x1>x2)
        pasosx=x1-x2;
        if(x2>x1)
        pasosx=x2-x1;
        if(y1>y2)
        pasosy=y1-y2;
        if(x2>x1)
        pasosy=x2-x1;
    printf("\n pasos en X %d \n", pasosx);
    printf("\n pasos en Y %d \n", pasosy);
}}