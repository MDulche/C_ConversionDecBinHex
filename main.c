#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "conversion.h"

int main()
{
    printf("\nQuelle conversion ? (Prendre le chiffre)\n\n 0. Conversion Total\n 1. Decimal/Binaire\n 2. Decimal/Hexadecimal\n 3. Binaire/Hexadecimal\n\n");
    int choix1;
    int choix2;
    int decimal;
    bool securite = true;
    char binaireChaine[8];
    char tableauBinaire[8] = {0, 0, 0, 0, 0, 0, 0, 0};
 
    scanf("%d", &choix1);
    if (choix1 == 0)
    {
        // Code pour la conversion totale
    }
    else if (choix1 == 1)//DecBin
    {
        choix:
            printf("\nQuel sens ? (Prendre le chiffre)\n\n 0. Decimal --> Binaire\n 1. Binaire --> Decimal\n\n");
            scanf("%d", &choix2);

        if (choix2 == 0)//Decimal --> Binaire
        {
            do
            {
                printf("\nEntrez votre chiffre entier à convertir (0-255) : \n");
                scanf("%d", &decimal);
                //Demande de la variable a l'utilisateur

                if (decimal < 0)
                {
                    printf("Le convertisseur ne prend pas les chiffres négatifs\n");
                }
                else if (decimal > 255)
                {
                    printf("Le convertisseur ne prend pas les chiffres aux dessus de 255\n");
                }
                else
                {
                    securite = false;
                }
            } while (securite);
            //Condition de sécurité

            conversionDecToBin(decimal, tableauBinaire);
            //Conversion de la variable

            printf("Binaire : [");
            affichage(tableauBinaire, 8);
            printf("]\n");
            //Affichage
        }
        else if (choix2 == 1)// Binaire --> Decimal
        {
            do
            {
                printf("\nEntrez votre binaire à convertir (0000 0000-1111 1111 en 8 bits) :\n\n");
                scanf("%s", binaireChaine);
                //recupération de la variable

                securite = 1;
                if (strlen(binaireChaine) > 8)
                {
                    printf("Le binaire que vous avez rentrez est trop grand\n");
                }
                else if (strlen(binaireChaine) < 8)
                {
                    printf("Le binaire que vous avez rentrez est trop petit (n'oubliez pas les zeros devant)\n");
                }
                else
                {
                    securite = false;
                }
            } while (securite);
            //Condition de sécurité

            printf("\n%d", conversionBinToDec(binaireChaine));
            //Conversion de la variable, Affichage
        }
        else// Erreur de choix DecBin
        {
            printf("Choix invalide.\n");
            goto choix;
        }
    }
    else if (choix1 == 2)// Decimal --> Hexadecimal
    {
        printf("\nEntrez votre chiffre à convertir (0-255) : \n");
        scanf("%d", &decimal);
        conversionDecToHex(decimal);
    }
    else// Erreur de choix DecHex
    {
        printf("Choix invalide.\n");
    }
 
    return 0;
}