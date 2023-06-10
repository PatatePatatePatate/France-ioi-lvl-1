#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
int nbNombres;
scanf("%d", &nbNombres);
int rep = 66;
int fois = 1;

   repeat(nbNombres)
{
   printf("%d\n", rep);
   fois = fois + 1;
   rep = rep * fois;
}
}
/*
Un nombre de départ va être donné par le chef du village. La personne qui suit doit le multiplier par 2, puis la suivante doit multiplier le nombre obtenu par 3, celle d'encore après doit multiplier le résultat par 4… jusqu'à ce que les nbNombres calculs aient été effectués.

Le chef a choisi le nombre 66 pour démarrer le jeu. Votre programme lira l'entier nbNombres, la quantité de nombres attendue par le jeu (nombre de départ inclus). Il devra ensuite afficher tous les nombres de la partie afin de vous rendre imbattable !
*/
