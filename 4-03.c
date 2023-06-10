#include <stdio.h>

int main()
{
   int ageCadet;
   int ageAine;
   scanf("%d", &ageCadet);
   scanf("%d", &ageAine);  
   int difference = ageAine - ageCadet;
   printf("%d\n", difference);
}
/*
Votre programme doit être une version corrigée du programme ci-dessous, sachant qu'il vous faut changer le moins de choses possible.

#include <stdio.h>
int main()
{
   int ageCadet;
   int ageAine;
   scanf("%d", ageCadet);
   scanf(&ageAine);  
   int difference = ageAine - ageDuCadet;
   printf("%d\n", difference);
}
*/
