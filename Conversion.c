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
        printf("%d", binaire[compteur]);
        if (compteur < 7)
        {
            printf(" ");
        }
    }
    printf("]\n");
    //Affichage du tableau binaire
}

void conversionBinToDec(char *binaireChar)
{
    int indice;
    int decimal = 0;
    int length = strlen(binaireChar);
    //Initialisation des variables

    if (length != 8)
    {
        printf("La chaîne binaire doit contenir exactement 8 caractères.\n");
        return;
    }
    

    for (indice = 0; indice < length; indice++) {
        if (binaireChar[indice] != '0' && binaireChar[indice] != '1') {
            printf("La chaîne binaire doit contenir uniquement des '0' et des '1'.\n");
            return;
        }
    }
    //Vérification du tableau

    for (indice = 0; indice < length; indice++)
    {
        if (binaireChar[indice] == '1')
        {
            decimal += (binaireChar[indice] - '0') * pow(2, 7 - indice);
        }
    }
    // Calcul de la valeur décimale

    printf("\n%d", decimal);
    //Affichage du decimal
}

void conversionDecToHex(int decimal)
{
    if (decimal < 0 || decimal > 255) {
        printf("Le nombre décimal doit être compris entre 0 et 255.\n");
        return;
    }
    //verification du decimal

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
    for (compteur = 0; compteur < 2; compteur++)
    {
        printf("%c", hexadecimal[compteur]);
        if (compteur < 1) {
            printf(" ");
        }
    }
    printf("]\n");
    //Affichage du tableau hexadecimal
}

int main()
{
    printf("\nQuelle conversion ? (Prendre le chiffre)\n\n 0. Conversion Total\n 1. Decimal/Binaire\n 2. Decimal/Hexadecimal\n 3. Binaire/Hexadecimal\n\n");
    int choix1;
    int choix2;
    int decimal;
    char binaireChaine[9]; // 8 bits + 1 pour le caractère nul

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
            conversionDecToBin(decimal);
        }
        else if (choix2 == 1)
        {
            printf("\nEntrez votre binaire à convertir (0000 0000-1111 1111 en 8 bits) :\n\n");
            scanf("%s", binaireChaine);
            conversionBinToDec(binaireChaine);
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

//A faire : Demande de conversion , hex-bin, hex-dec, bin-hex, ip, interface graphique

//          & & %@@*/*/
//        % @.  %@@@@*@*@&@
//     ,#/@@%@@@%@@  *,*/&/@@
//    ,,#/  %   @@@  /,**&  @@
//   /,,#/@@%   @@@,*/(**&  @@
//   //,*#/,*%   @(@  /(**& @@
//   / ,%,@@&  *@@@  /(@*&.@@@
//   @@/@@@(%,*/ @@  .@@/@@@&@
//  @,@@#@@@%% Neiryx *@@*@@@&@@
// @(,@/    (#  /(@@  *@(   .&@@
//  @.&     ,#  /*#&@@.@     *@@#
//  @.@@#*%%@@  /@@@  *@@%.(%@@@#
//    @#*@%@@ *@@@@  *@@%(@%@@
//     #(@@(@ @@%&&  *@@%(@&
//     #/(@(@ @@@@@& *@@%@/
//     #,(@/# @/@@.% *@@%@/
//     #,&@,/ @.,&@ .*@@%@(
//      .@   @@ &,%.*# %@