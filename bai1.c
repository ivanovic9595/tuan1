#include <stdio.h>
#include <math.h>
int main()
{
	int n,a,b,c,x;
	printf("nhap vao so nguyen:");
	scanf("%d",&n);
	a=n/100;
	b=((n%100)/10);
	c=n%10;
	if(a>=10)
	printf("error!");
	else{
		if(a<b){
			x=a;
			a=b;
			b=x;
		}
		if(b<c){
			x=b;
			b=c;
			c=x;
			}
			if(a<b){
				x=a;
				a=b;
				b=x;
			}
           printf("%d%d%d",a,b,c);
	}


}
