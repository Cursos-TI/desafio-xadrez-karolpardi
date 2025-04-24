#include <stdio.h>
//Movimentção da rainha em while
int main (){
    int rainha=4;
    int i=0;

    printf("Rainha anda 4 casas para esquerda\n");

    while (i < rainha){
        printf("esquerda\n");
        i++;
    }
//Movimentação do bispo em for
    int bispo=5;
    int b;

    printf("Bispo anda 5 casas para cima a direita\n");
    
   for (b= 1; b < bispo; b++)
   {
    printf("cima direita\n");
   }
   //Movimentação da torre em Do while
   int torre = 5;
   int t=0;

   printf ("Torre anda 5 casas para direita \n");

   do {
    printf("direita\n");
    t++;
   } while (t < torre);
   
   

return 0;
}
