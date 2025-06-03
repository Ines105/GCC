#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   int secret, essai, compteur = 0; 
   srand(time(NULL));

   secret = rand() % 100 + 1;

   do {
      printf("Devine le nombre (entre 1 et 100) : ");
      scanf("%d", &essai);
      compteur++;

      if (essai < secret) {
         printf("Trop petit !\n");
      }  else if (essai > secret){                                                                                                                                       printf("Trop grand !\n");
                                                                                      }  else {
                                                                                         printf("Bravo ! Tu as trouvé en %d essais.\n", compteur);                    }
    } while (essai != secret);

      return 0;
}
