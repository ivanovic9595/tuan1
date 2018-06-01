#include<stdio.h>

int main() {
   int upper = 0, lower = 0;
   char ch[50];
   int i;

   printf("\nNHAP VAO CHUOI : ");
   gets(ch);

   i = 0;
   while (ch[i] != '\0') {
      if (ch[i] >= 'A' && ch[i] <= 'Z')
         upper++;
      if (ch[i] >= 'a' && ch[i] <= 'z')
         lower++;
      i++;
   }

   printf("\nso ky tu chu hoa : %d", upper);
   printf("\nso ky tu chu thuong : %d", lower);

   return (0);
}
