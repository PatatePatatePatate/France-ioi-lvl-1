#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
int fois;
scanf("%d", &fois);
printf("%d\n", fois * 57600);
}
/*
Votre programme devra lire un entier : le nombre de jours que dure la randonnée.
Ensuite, il devra afficher le nombre de fois que l'incantation est répétée, sachant qu'elle est prononcée une fois par seconde pendant 16 heures par jour.
*/
