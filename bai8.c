#include <stdio.h>
#include <string.h>
#define MAX 100
void main ()
{
	char a[MAX],c;
	int i,j,n;
	printf(" nhap chuoi: ");
	gets(a);
	n=strlen(a);
	j=n-1;
	for ( i=0; i<n/2;i++)
	{

		c=a[i];
		a[i]=a[j];
		a[j]=c;
		j--;
	}
	printf (" chuoi dao nguoc: ");
	puts(a);

}
