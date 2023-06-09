#include <stdio.h>
#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
   repeat (15)
   {
      droite();
      ramasser();
   }
   droite();
   deposer();
}
/*
L'allée centrale du village peut être représentée comme une série de 17 cases, dont la plupart contiennent une bouse de Borlok :

R...............-
Le robot se trouve initialement dans la case de gauche. Il doit se déplacer case par case en allant vers la droite, et ramasser sur chaque case la bouse qui s'y trouve.
Enfin, votre robot doit déposer tout ce qu'il a ramassé dans la boîte située sur la 17e case, tout à droite.

Votre programme ne doit pas faire plus d'une dizaine de lignes.
*/
