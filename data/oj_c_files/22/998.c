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

int main ()
{
	int num[300],t,a,i,j;
	a=0;
    scanf("%d",&num[a]);
	a=1;
	while (	scanf(",%d",&num[a]))
	{	
	    a=a+1;
	}

	if (a==1)
		printf("No");
    else
	{
	for(j=0;j<=a-1;j++)
      for(i=0;i<a-j;i++)
       if(num[i]>num[i+1])
	   {t=num[i]; num[i]=num[i+1]; num[i+1]=t;}
	for(a=a;a>1;a--)
	{
		if(num[a-1]<num[a])
		{   
			if(num[a-1]==167)
			{num[a-1]=161;}
			if(num[a-1]==81)
			{num[a-1]=80;}
			printf("%d",num[a-1]);break;
		}
	}
       if(a==1)
		printf("No");

    }
	return 0;
}
