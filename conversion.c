#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdint.h>
#include <assert.h>

void affichage(char *tableau, int longueur)
{
    for (int compteur = 0; compteur < longueur; compteur++)
    {
        printf("%d", tableau[compteur]);
        if (compteur < longueur - 1)
        {
            printf(" ");
        }
    }
}

void conversionDecToBin(int decimal,char *binaire)
{
    int compteur = 7;

    //Initialisation des variables
   
    while (decimal!=0)
    {
        binaire[compteur] = decimal % 2;
        decimal /= 2;
        compteur--;
    }
    //Calcul de Décimal à binaire par division successive de 2
}
 
int conversionBinToDec(char *binaireChar)
{
    int indice;
    char decimal = 0;
    int length = strlen(binaireChar);
    //Initialisation des variables
 
    for (indice = 0; indice < length; indice++)
    {
        if (binaireChar[indice] == '1')
        {
            decimal += (binaireChar[indice] - '0') * pow(2, 7 - indice);
        }
        
    }
    // Calcul de la valeur décimale
    return decimal;
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