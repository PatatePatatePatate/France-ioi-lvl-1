#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)

int main()
{
   repeat (20)
   {
      repeat (20)
      {
         printf("OX");
      }
      printf("\n");
      repeat (20)
      {
         printf("XO");
      }
      printf("\n");
   }
}
/*
Un damier de dimension 4×4 peut se représenter sous la forme suivante :

↳
OXOX
XOXO
OXOX
XOXO
Votre programme doit afficher un damier de taille 40×40. Assurez-vous bien que la case tout en haut à gauche contienne un « O », comme c'est le cas dans le damier ci-dessus.
*/
