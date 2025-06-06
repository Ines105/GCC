#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   int secret, essai, compteur = 0; 
   srand(time(NULL));
    
   secret = rand() % 100 + 1;
   int maxEssais = 5;
   char rejouer;
   do {
      printf("Devine le nombre (entre 1 et 100) : ");
      scanf("%d", &essai);
      compteur++;

      if (essai < secret) {
          printf("Trop petit !\n");
      }  else if (essai > secret) { 
          printf("Trop grand !\n");     
      }
      if (essai != secret && compteur <= maxEssais) {
         
         printf("Bravo ! Tu as trouvé en %d essais.\n", compteur);
      } else if ( essai != secret && compteur == maxEssais) {
          printf("perdu ! le nombre etait %d.\n", secret);
      }
      if (essai == secret || compteur == maxEssais) {
         printf("Veux-tu rejouer? (o/n) :");

         scanf(" %c", &rejouer);  
      if (rejouer == '0' || rejouer == '0') {
          secret = rand() % 100 + 1;
          compteur = 0;
       }
      }
    } while (rejouer == 'o' || rejouer == '0');

      return 0;
}
