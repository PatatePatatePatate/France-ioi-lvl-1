#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
   repeat(29)
{
   printf("a_");
}
printf("a_\n");

   repeat(29)
{
   printf("b_");
}
printf("b_\n");

   repeat(29)
{
   printf("c_");
}
printf("c_\n");
}
/*
Votre programme doit écrire 3 lignes, chacune contenant plusieurs fois de suite une lettre suivie du caractère « _ » (underscore en anglais) : la lettre « a » sur la première ligne, la lettre « b » sur la deuxième et la lettre « c » sur la troisième.

Vous disposez déjà d'un modèle où chaque ligne contient 4 lettres :

↳
a_a_a_a_ 
b_b_b_b_
c_c_c_c_
Cependant, vous vous dites qu'il serait mieux de mettre 30 lettres par ligne. Écrivez un programme qui étend votre modèle. Bien sûr, vous utiliserez une boucle pour ne pas vous fatiguer à écrire vous-même 30 fois chaque lettre.


*/
