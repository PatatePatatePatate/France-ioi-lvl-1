#include <stdio.h>
#define repeat(nb) ;for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
int nbr = 1;
int fois = 1;
int new = 0

      repeat(20)
{
   repeat(20)
{
   nbr = nbr + new;
   printf("%d", nbr);
   nbr = nbr + fois;
   printf(" ");
}
printf("\n");
new = new + 1;
nbr = 1;
fois = 1;
}
}
/*
Voici à quoi ressemble la table de multiplication allant jusqu'à 5 fois 5.

↳
1 2 3 4 5
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20
5 10 15 20 25
Écrivez un programme qui affiche une table de multiplication allant jusqu'à 20 fois 20.
*/
