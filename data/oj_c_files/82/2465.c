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
	int a,b,n,i,j,c;
	c=0;
	scanf("%d",&n);
	int a1[100];
	for(j=0;j<100;j++)
	{
		a1[j]=0;
	}
    for(i=0;i<n;i++)
	{
		a=0;
		b=0;
		scanf("%d %d",&a,&b);
		if(a>89&&a<141&&b>59&&b<91)
		{
			a1[i+1]=a1[i]+1;
		}
	    if(a<90||a>140||b<60||b>90)
			{
				a1[i+1]=0;
			}
		
	}
	for(i=0;i<1+n;i++)
	{
		if(c<a1[i])
		{
			c=a1[i];
		}
         }
    printf("%d",c);
	return 0;
	
}