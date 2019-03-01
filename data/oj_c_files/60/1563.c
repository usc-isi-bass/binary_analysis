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
int i,n,j,a,b=0;
scanf("%d",&n);
for(i=3;i<n-1;i++)
{
	for(j=2;j<i;j++)
    {
		a=j;
        if(i%j==0)break;
	}
        if(a==i-1)
    {
        for(j=2;j<i+2;j++)
       {
		   a=j;
           if((i+2)%j==0)break;
       }
    }
    if(a==i+1)
	{printf("%d %d\n",i,i+2);
	b++;}
}
if(b==0)
	printf("empty");
return 0;
}