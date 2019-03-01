#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
	int a[6];
	int i;
	for(i=0;i<6;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
		fxs(a[i]);
	return 0;

}
	
void fxs(int a)
{
	int i,b=0;
	int c[15]={0};
	if(a<0)printf("-");
	
	a=abs(a);
	for(i=0;a>0;a=a/10,i++)
	{
		c[i]=a%10;
		b++;
	}
	for(i=0;i<b;i++)
		a=c[i]*pow(10,b-i-1)+a;
	printf("%d\n",a);
}