#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; int a = 0;
    printf("Nhap chieu cao tam giac : \n");
    scanf("%d",&n);

    while (n > 0)
    {
        for (int i = 1; i<n; i++)
            printf("%c", ' ');
        for (int b = 0; b <= a; b ++)
            printf("%c", '*');
        n -- ;
        a += 2 ;
        printf("\n");
    }

    return (0);
}
