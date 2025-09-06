#include <stdio.h>

int main() {

int tab [50];
int sum = 0;
int moy;
int taille;
int i;



printf ("Entrer une taille: \n");
scanf ("%d", &taille);

for (i = 0; i < taille; i++){
    printf("Entrer le tab [%d]: ", i);
    scanf("%d", &tab[i]);
}

for (i = 0; i < taille; i++){
  sum += tab [i];
}
printf("La somme est: %d", sum);
moy = sum / 5;
printf ("\nLa moyenne est: %d", moy);






  return 0;
}