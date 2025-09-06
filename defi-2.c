#include <stdio.h>

int main() {

int tab [5] = {1,2,3,4,5};
int n;
int trouve = 0;

printf ("Entrer un nombre: \n");
scanf("%d", &n);

for (int i = 0; i < 5; i++){
  if (n == tab[i]){
    printf("Trouve");
    trouve = 1;

  }
  
}
if (!trouve){
  printf("non torve");
}



  return 0;
}