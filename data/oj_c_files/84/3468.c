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

void main()
{int n,a[99],i,max,s,c,j;
	scanf("%d",&n);
	scanf("%d",&s);
	a[0]=s;
	max=s;
	c=-1;
	for(i=1;i<n;i++)
	{  scanf("%d",&s);  
	  a[i]=s;
       if (max<a[i])
	   {max=a[i];
	   j=i;}
	}
	printf("%d\n",max);
    
	for(i=0;i<n;i++)
	{
		if(c<a[i]&&i!=j)
	  c=a[i];
	   }
    printf("%d",c);
}