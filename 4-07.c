#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
int positionDepart;
int largeurEmplacement;
int nbVendeurs;
scanf("%d", &positionDepart);
scanf("%d", &largeurEmplacement);
scanf("%d", &nbVendeurs);
int position = positionDepart;

   repeat(nbVendeurs + 1)
{
   printf("%d\n", position);
   position = position + largeurEmplacement;
}
}
/*
Il y a trois entiers à lire : la position de départ positionDepart, la largeur d'un emplacement largeurEmplacement et le nombre de vendeurs nbVendeurs.

Vous devez afficher une suite de nombres, partant de positionDepart et augmentant de largeurEmplacement à chaque fois. Il y a au total nbVendeurs augmentations à faire. Vous devez afficher la valeur de chacun des nombres de la suite.
*/
