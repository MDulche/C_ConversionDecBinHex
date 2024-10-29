#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void conversionDecToBin(int decimal)
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

void conversionDecToHex(int decimal)
{
    int compteur = 1;
    char hexadecimal[2];
    char comptage[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int indiceComptage;
    //Initialisation des variables 

    while (decimal!=0)
    {
        indiceComptage = decimal % 16;
        hexadecimal[compteur] = comptage[indiceComptage];
        decimal /= 16;
        compteur--;
    }
    //Calcul de Décimal à binaire par division successive de 16

    printf("[");    
    for (compteur = 0; compteur < 2;compteur++)
    {
        if (hexadecimal[compteur]>=0 && hexadecimal[compteur]<=9)
        {
            if (compteur != 1)
            {
                printf("%d", hexadecimal[compteur]);
                printf(" ");
            }
            else
            {
                printf("%d", hexadecimal[compteur]);
            }
        }
        else
        {
            if (compteur != 1)
            {
                printf("%c", hexadecimal[compteur]);
                printf(" ");
            }
            else
            {
                printf("%c", hexadecimal[compteur]);
            }
        }
    }
    printf("]");  
    //Affichage du tableau hexadecimal
}

int main()
{

    int decimal;

    printf("Rentrer votre chiffre à convertir (0-255) : ");
    scanf("%d", &decimal);

    //Récupération de la valeur décimal (Base 10) à convertir.

    conversionDecToBin(decimal);
    conversionDecToHex(decimal);
    return 0;
}
//A faire : Demande de conversion , hex-bin, hex-dec, bin-hex, ip, interface graphique