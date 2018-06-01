#include <stdio.h>
int ucln(int a,int b){
if(b==0) return a;
return ucln(a,a%b);
}
int bcnn(int a,int b){
return(a*b)/ ucln(a,b);
}
int main(){
int a,b;
printf("nhap so thu nhat:");
scanf("%d",&a);
printf("nhap so thu 2:");
scanf("%d",&b);
printf("uoc chung lon nhat cua 2 so la:%d",ucln(a,b));
printf("boi chung nho nhat cua 2 so la:%d",bcnn(a,b));

}
