#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[100];
   int harf, i, kelime = 0;
   harf = i = 0;

   printf("Lutfen bir string giriniz : ");
   gets(str);

   while (str[i] != '\0')
   {
      if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
      {
         harf++;
      }
      else if (str[i] == ' ')
      {
         kelime++;
      }
      i++;
   }
   kelime++;

   printf("Harf sayisi : %d\n", harf);
   printf("Kelime sayisi : %d\n", kelime);
   return 0;
   
}
