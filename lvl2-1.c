#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
   repeat (135)
      {
      printf("Je dois respecter le Grand Sorcier.\n");
      }
}

/*
Vous vous trouvez devant une source d'eau qui jaillit de la montagne, et vous disposez de deux tonneaux vides de capacités 5 litres et 3 litres.
Écrivez un programme qui effectue une série de transvasements permettant d'obtenir exactement 4 litres d'eau dans le plus grand tonneau.
*/
