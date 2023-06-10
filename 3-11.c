#include <stdio.h>
#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
int pas = 0;
      repeat(10)
{
pas = pas + 1;
   repeat(pas)
{
      droite();
}
ramasser();
   repeat(pas)
{
   gauche();
}
   deposer();
}
}
/*
Votre robot doit partir de la case de gauche (en orange), aller chercher les anneaux (les ronds sur fond bleu) dans l'ordre (de gauche à droite) et les ramener un par un à la case de départ.
Voici un exemple qui rapporte les deux premiers anneaux.

#include "robot.h"
int main()
{
   droite();
   ramasser();
   gauche();
   deposer();
   droite();
   droite();
   ramasser();
   gauche();
   gauche();
   deposer();
}
*/
