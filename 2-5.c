#include <stdio.h>
#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
   repeat(21)
   {
   haut();
   droite();
   }
   repeat(21)
   {
   gauche();
   bas();
   }
}
/*
Programmez votre robot pour qu'il mène le rocher tout en haut des 21 marches de la pyramide et redescende ensuite tout en bas.
Par exemple, si la pyramide ne faisait que deux marches de haut, votre robot devrait effectuer le trajet illustré ci-dessous : haut, droite, haut, droite, gauche, bas, gauche, bas.
*/
