#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdint.h>
#include <assert.h>

void affichage(char *tableau, int longueur)
{
    for (int compteur = 0; compteur < longueur;compteur++)
    {
        printf("%d", tableau[compteur]);
        if (compteur < (longueur-1))
        {
            printf(" ");
        }
    }
    //Affichage du tableau binaire
}

void conversionDecToBin(int decimal)
{
    int compteur = 7;
    int binaire[8] = {0, 0, 0, 0, 0, 0, 0, 0};

    assert(decimal >= 0 && decimal <= 255);

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
    char decimal = 0;
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
 
void conversionBinToHex()
{
   
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