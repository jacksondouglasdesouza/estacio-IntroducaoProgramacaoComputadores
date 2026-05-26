#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");
   
   /*
   int i, j;

   for (i = 1; i <= 5; i++)
   {
      for (j = 1; j <= 5; j++)
      {
         printf("%d ", j);
      }
      printf("\n");
   }

   */

   //--

   /*

   int i = 1;

   while (i <= 10)
   {

      int j = 1;

      while (j <= 10)
      {
         printf("%d\t", i * j);
         j++;
      }

      printf("\n");
      i++;
   }

   */

   for (int i =1; i <= 10; i++) {
      for (int j = 1; j <= 10; j++) {
         printf("%d\t ", i * j);
      }
      printf("\n\n");
   }


   return 0;
}