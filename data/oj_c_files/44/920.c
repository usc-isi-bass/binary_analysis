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


int reverse(int a)
{
	int c[6],b[6],d[6],i,x,y,z=0;
	if(a>0)
	{
		x=log10(a)+1;
		b[0]=a;
		for(i=0;i<x;i++)
		{
			y=pow(10,x-i-1);
			c[i]=b[i]/y;
			b[i+1]=b[i]%y;
		}
		for(i=0;i<x;i++)
		{
			d[i]=c[i]*pow(10,i);
			z=z+d[i];
		}
		return z;
	}
	 
    if(a<0)
	{
		a=-a;
		x=log10(a)+1;
		b[0]=a;
		for(i=0;i<x;i++)
		{
			y=pow(10,x-i-1);
			c[i]=b[i]/y;
			b[i+1]=b[i]%y;
		}
		for(i=0;i<x;i++)
		{
			d[i]=c[i]*pow(10,i);
			z=z+d[i];
		}
		return -z;
	}

	if(a==0||a==-0)
		return 0;      
}

	 


void main()
{
 	int i,a[6];
	for(i=0;i<6;i++)
	    scanf("%d",&a[i]);
	for(i=0;i<6;i++)
	    printf("%d\n",reverse(a[i]));
}
	