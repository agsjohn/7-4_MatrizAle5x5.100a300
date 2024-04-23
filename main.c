#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ALE 301
#define MAX 5

main(){
  int c, l, m[MAX][MAX], cont = 0, mod;
  srand(time(NULL));
  for(l = 0; l < MAX; l++){
    for(c = 0; c < MAX; c++){
      do{
        m[l][c] = rand() % ALE;
      }while(m[l][c] < 100);
    }
  }
  printf("\nMatriz: \n");
  for (l = 0; l < MAX; l++) {
    for (c = 0; c < MAX; c++) {
      if (c < MAX - 1) {
        printf("%i - ", m[l][c]);
      }
      else{
        printf("%i\n", m[l][c]);
      }
    }
  }
  printf("Números divisíveis por 3: ");
  for(l = 0; l < MAX; l++){
    for(c = 0; c < MAX; c++){
      mod = m[l][c] % 3;
      if(mod == 0){
        if(cont == 0){
          printf("%i ", m[l][c]);
        }
        else{
          printf(" - %i", m[l][c]);
        }
        cont++;
      }
    }
  }
  getchar();
}