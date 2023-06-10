#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
int bonbon = 0;
int bnsbon = 1;

   repeat(50)
{
   bonbon = bonbon + bnsbon;
   printf("%d\n", bonbon);
   bnsbon = bnsbon + 1;
}
}
/*
Toucher la cible au premier tir rapporte un bonbon, toucher la cible au deuxième tir rapporte deux bonbons de plus, la toucher au troisième tir rapporte encore trois bonbons de plus, etc. Écrivez un programme qui affiche sur la première ligne le nombre total de bonbons obtenus si l'on ne réussit qu'1 tir, puis qui affiche sur la deuxième ligne le nombre de bonbons récupérés si l'on réussit 2 tirs de suite, puis sur la troisième ligne le nombre de bonbons récupérés si l'on réussit 3 tirs de suite, etc. jusqu'à la valeur que l'on peut récupérer si l'on réussit 50 tirs de suite.

Par exemple, si votre programme s'arrêtait à 5 et non à 50, il devrait afficher ceci :
*/
