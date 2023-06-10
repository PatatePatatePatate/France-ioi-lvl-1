#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
int crapaud = 1337;
   repeat(12)
{
   crapaud = crapaud * 2;
}
printf("%d", crapaud);
}
/*
Sachant qu'il y a actuellement 1337 crapauds et que leur nombre double chaque semaine, votre programme devra afficher le nombre de crapauds qu'il y aura après la 12e semaine.

Important : vous devez utiliser une boucle pour calculer le nombre de crapauds.
*/
