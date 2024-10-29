#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int conversionDecToBin(int decimal)
{
    int compteur = 7;
    int binaire[8] = {0,0,0,0,0,0,0,0};

    while (decimal!=0)
    {
        binaire[compteur] = decimal % 2;
        printf("%d\n", binaire[compteur]);
        decimal /= 2;
        printf("%d\n", decimal);
        compteur--;
    }

    for (compteur = 0; compteur < 8;compteur++)
    {
        printf("%d", binaire[compteur]);
    }
}

int main()
{

    int decimal;

    printf("Rentrer votre chiffre à convertir (0-255) : ");
    scanf("%d", &decimal);

    //Récupération de la valeur décimal (Base 10) à convertir.

    conversionDecToBin(decimal);
    
    return 0;
}