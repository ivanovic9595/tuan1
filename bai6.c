#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
void chuanhoachuoi(char[]);
int main()
{
   char a[100];
   printf("Nhap vao chuoi:");
   gets(a);
   chuanhoachuoi(a);
   getch();
   return 1;
}
void chuanhoachuoi(char a[])
{
   int i=0,j;

   while(a[i] != '\0'){
    while(a[0]==' ')
        strcpy(&a[i],&a[i+1]);//xoa cac ki tu trang o dau
    if(a[i]==' '&&a[i+1]==' ')  //xoa khoang trang lien tiep
        strcpy(&a[i],&a[i+1]);
    else i++;

   }
   j=strlen(a);
   if(a[j-1] == ' ')
    a[j-1] = '\0';//xoa ki tu trang o cuoi

   for(i=0;i<=j;i++){
    if((a[i]==' '&&a[i+1]=='.')||(a[i]==' '&&a[i+1]==',')){
        strcpy(&a[i],&a[i+1]);//xoa khoang trang truoc dau
    }
    else i++;
   }
   for(i=0;i<=j;i++){
    if((a[i]=='.'&&a[i+1]!=' ')||(a[i]==','&&a[i+1]!=' ')){
        a[i+1]==' ';//them khoang trang o sau dau
    }
    else i++;
   }
   for(i=0;i<=j;i++){
    if((a[i]=='.'&&a[i+1]=='.')||(a[i]==','&&a[i+1]==',')){
        strcpy(&a[i],&a[i+1]);
    }
    else i++;
   }

   printf("\nChuoi duoc chuan hoa la:");
   printf("%s",a);
}
