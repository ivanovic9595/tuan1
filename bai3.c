#include <stdio.h>
#include <math.h>

int main()
{
int m;
printf("nhap vao so m:");
scanf("%d",&m);
if(m<=1000)
printf("tien cuoc la:10000VND");
else if(m>1000 && m<=30000){

printf("tien cuoc la:%d VND",10000+(((m-1000)*1500)/200));
}
else if(m>30000){
printf("tien cuoc la:%d",227500+((m-30000)*8));
}
}



