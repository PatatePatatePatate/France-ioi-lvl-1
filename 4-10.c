#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int nbrkarva;
scanf("%d", &nbrkarva);
   repeat(nbrkarva)
{
int poid;
int age;
int longcorn;
int hautgarrot;
int resultat;
scanf("%d", &poid);
scanf("%d", &age);
scanf("%d", &longcorn);
scanf("%d", &hautgarrot);
resultat = longcorn * hautgarrot + poid;
printf("%d\n", resultat);
resultat = 0;
}
}
/*
Votre programme doit d'abord lire le nombre de Karvas en compétition. Ensuite, pour chaque Karva, il doit :

lire 4 entiers : son poids, son âge, la longueur de ses cornes et la hauteur au garrot ;
afficher sa note, sachant qu'elle s'obtient en multipliant la longueur des cornes par la hauteur au garrot, valeur à laquelle on ajoute le poids.
*/
