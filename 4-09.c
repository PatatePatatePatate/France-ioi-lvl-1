#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
int bas;
int haut;
scanf("%d", &bas);
scanf("%d", &haut);
int moy = bas - haut + 1;
int des = bas;
int rep = 0;

   repeat(moy)
{
   rep = rep + des * des;
   des = des - 1;
}
printf("%d\n", rep);
}
/*
Un socle est ainsi constitué d'étages, chaque étage ayant une hauteur égale à une unité et une base carrée. Le côté des carrés diminue de une unité à chaque étage.

Votre programme doit lire deux entiers, représentant respectivement la largeur du socle au niveau du sol et la largeur du socle au niveau de la face supérieure du socle. Il doit ensuite calculer et afficher le volume du socle.
*/
