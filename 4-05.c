#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
int tempMin;
int tempMax;
scanf("%d", &tempMin);
scanf("%d", &tempMax);
int moy = tempMax - tempMin + 1;
int bns = 0;

   repeat(moy)
{
   printf("%d\n", tempMin + bns);
   bns = bns +1;
}
}
/*
Étant données deux températures entières tempMin et tempMax, votre programme doit afficher toutes les températures comprises entre les deux, bornes incluses.
*/
