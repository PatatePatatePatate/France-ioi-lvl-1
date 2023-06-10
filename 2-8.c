#include <stdio.h>
#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
   repeat(108)
   {
   repeat(13)
   {
   haut();
   }
   repeat(13)
   {
   droite();
   }
   repeat(13)
   {
   bas();
   }
   repeat(13)
   {
   gauche();
   }
   }
}
/*
Votre robot doit faire 108 fois le tour du chemin vert représenté ci-dessous, en tournant dans le sens des aiguilles d'une montre.

################
#              #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
# ############ #
#D             #
################
Le robot se trouve initialement en bas à gauche. Chaque case représente 1 km, donc pour faire un tour, le robot doit se déplacer successivement de 13 km dans chacune des 4 directions.
*/
