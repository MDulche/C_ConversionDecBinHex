#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{

    int decimal;
    int decimalCopie;

    printf("Rentrer votre chiffre à convertir (0-255) : ");
    scanf("%d", &decimal);

    decimalCopie = decimal;

    //Récupération de la valeur décimal (Base 10) à convertir.
    int compteur = 7;
    int binaire[8] = {0,0,0,0,0,0,0,0};

    while (decimalCopie!=0)
    {
        binaire[compteur] = decimalCopie % 2;
        printf("%d\n", binaire[compteur]);
        decimalCopie /= 2;
        printf("%d\n", decimalCopie);
        compteur--;
    }

    for (compteur = 0; compteur < 8;compteur++)
    {
        printf("%d", binaire[compteur]);
    }
    
    return 0;
}