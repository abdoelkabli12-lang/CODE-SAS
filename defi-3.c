#include <stdio.h>

int main () {

int tab [5] = {6,3,8,45,12};
int max = tab [0];
int min = tab[0];

for (int i = 0; i < 5; i++){

  if (max < tab[i]){
    max = tab[i];

  }
  else if (min > tab[i]){
    min = tab[i];

  }
}
printf("Le max est: %d\n", max);
printf("Le min est: %d", min);

  return 0;
}