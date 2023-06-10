#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{

int mopo = 1;

   repeat(100)
{
      printf("%d\n", mopo);
      mopo = mopo + 1;
}
   printf("J'arrive !");
}
/*
Le robot devra compter jusqu'à 100, c'est à dire afficher les entiers de 1 à 100, un par ligne, et ensuite afficher « J'arrive ! ». Ainsi, s'il ne devait compter que jusqu'à 3 au lieu de 100, votre robot devrait afficher :

↳
1
2
3
J'arrive !
Important : votre programme ne doit pas faire plus d'une quinzaine de lignes.


*/
