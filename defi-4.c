#include <stdio.h>

int main (){

  int tab [3] = {1,2,3};
  int n = 0;

  for (int j = 0; j < 3; j++){
    printf("%d ", tab[j]);
  }
printf("\n");
  for (int i = 0; i < 3 / 2; i++){
    n = tab [i];
    tab[i] = tab[2 - i];
    tab [2 - i] = n;

  }
    printf("Reversed in memory: ");
    for (int j = 0; j < 3; j++) {
        printf("%d ", tab[j]);
    }
    printf("\n");




  return 0;
}