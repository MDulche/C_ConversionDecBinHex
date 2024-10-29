#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int conversionDecToBin(int decimal)
{
    int compteur = 7;
    int binaire[8] = {0,0,0,0,0,0,0,0};
    //Initialisation des variables 
    while (decimal!=0)
    {
        binaire[compteur] = decimal % 2;
        decimal /= 2;
        compteur--;
    }
    //Calcul de Décimal à binaire par division successive de 2
    printf("[");
    for (compteur = 0; compteur < 8;compteur++)
    {
        if (compteur != 7)
        {
            printf("%d", binaire[compteur]);
            printf(" ");
        }
        else
        {
            printf("%d", binaire[compteur]);
        }
        
        
    }
    printf("]");
    //Affichage du tableau binaire
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