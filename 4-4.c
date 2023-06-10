#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
int fois;

   scanf("%d", &fois);

   repeat(fois)
{
   printf("Je dois suivre en cours\n");
}
}
/*
Votre programme doit lire un entier, le nombre de lignes souhaité, et écrira autant de fois que demandé la phrase « Je dois suivre en cours ».
*/
