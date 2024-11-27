#include <stdio.h>
#include "conversion.h"

void tttt(int decimal, int *tableau);


void affichage(char *tableau, int longueur)
{
    printf("[");
    for (int compteur = 0; compteur < longueur; compteur++)
    {
        printf("%d", tableau[compteur]);
        if (compteur < longueur - 1)
        {
            printf(" ");
        }
    }
    printf("]\n");

}

int main()
{
    printf("\nQuelle conversion ? (Prendre le chiffre)\n\n 0. Conversion Total\n 1. Decimal/Binaire\n 2. Decimal/Hexadecimal\n 3. Binaire/Hexadecimal\n\n");
    int choix1;
    int choix2;
    int decimal;
    char binaireChaine[9]; // 8 bits + 1 pour le caractère nul*
    char tableau_binaire[8];
 
    scanf("%d", &choix1);
    if (choix1 == 0)
    {
        // Code pour la conversion totale
    }
    else if (choix1 == 1)
    {
        printf("\nQuel sens ? (Prendre le chiffre)\n\n 0. Decimal --> Binaire\n 1. Binaire --> Decimal\n\n");
        scanf("%d", &choix2);
        if (choix2 == 0)
        {
            printf("\nEntrez votre chiffre à convertir (0-255) : \n");
            scanf("%d", &decimal);
            //recupération de la variable

            conversionDecToBin(decimal);
            //Conversion de la variable

            printf("Binaire : [");
            affichage(tableau_binaire, 8);
            printf("]\n");
            //Affichage
        }
        else if (choix2 == 1)
        {
            printf("\nEntrez votre binaire à convertir (0000 0000-1111 1111 en 8 bits) :\n\n");
            scanf("%s", binaireChaine);
            //recupération de la variable

            conversionBinToDec(binaireChaine);
            //Conversion de la variable

            
        }
        else
        {
            printf("Choix invalide.\n");
        }
    }
    else if (choix1 == 2)
    {
        printf("\nEntrez votre chiffre à convertir (0-255) : \n");
        scanf("%d", &decimal);
        conversionDecToHex(decimal);
    }
    else
    {
        printf("Choix invalide.\n");
    }
 
    printf("\n\nAppuyez sur Entrée pour quitter...");
    getchar();
    getchar();
 
    return 0;
}