#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

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

    printf("Binaire : [");
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
    printf("]\n");
    //Affichage du tableau binaire
}

void conversionBinToDec(char *binaireChar)
{
    int indice;
    int decimal = 0;

    // Calcul de la valeur décimale
    for (indice = 0; indice < 8; indice++)
    {
        if (binaireChar[indice] == '1')
        {
            decimal += (binaireChar[indice] - '0') * pow(2, 7 - indice);
        }
    }
    printf("%d", decimal);
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

    printf("Hexadecimal : [");    
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
    printf("]\n");  
    //Affichage du tableau hexadecimal
}

int main()
{
    printf("\nQuels conversion ? (Prendre le chiffre)\n\n 0. Conversion Total\n 1. Decimal/Binaire\n 2. Decimal/Hexadecimal\n 3. Binaire/Hexadecimal\n\n");
    int choix1;
    int choix2;
    int decimal;
    int temporaire;
    int indice;
    scanf("%d", &choix1);
    if (choix1 == 0)
    {
        /* code */
    }
    if (choix1 == 1)
    {
        char binaireChaine[8];
        printf("\nQuel sens ? (Prendre le chiffre)\n\n 0. Decimal --> Binaire\n 1. Binaire --> Decimal\n\n");
        scanf("%d", &choix2);
        if (choix2 == 0)
        {
            printf("Rentrer votre chiffre à convertir (0-255) : ");
            scanf("%d", &decimal);
            conversionDecToBin(decimal);
        }
        if (choix2 == 1)
        {
            printf("Rentrer votre binaire à convertir (0000 0000-1111 1111 rentrer en 8bit) : \n");
            scanf("%s", binaireChaine);
            conversionBinToDec(& binaireChaine[0]); 
        }

    }


    getchar();
    getchar();

    return 0;
    /*
    conversionDecToBin(decimal);
    conversionDecToHex(decimal);

    printf("\n\nAppuyez sur Entrée pour quitter...");
    */

}
//A faire : Demande de conversion , hex-bin, hex-dec, bin-hex, ip, interface graphique