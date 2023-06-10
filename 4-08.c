#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
int karvas;
int total = 0;
   repeat(20)
{
   scanf("%d", &karvas);
   total = total + karvas;
}
printf("%d\n", total);
}
/*
Votre programme doit lire 20 entiers puis afficher la somme de tous ces entiers.


*/
