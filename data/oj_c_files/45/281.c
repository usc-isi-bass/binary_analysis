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
{
	char a[50],b[50];
	int i,j,k=0,l,x,y;
	scanf("%s %s",a,b);
	x=strlen(a);
	y=strlen(b);
	for(i=0;i<=(y-x);i++)
		if(b[i]=a[0])
		{   l=1;
		    k=i;
			for(j=i+1;l<x;j++,l++)
				if(a[l]!=b[j])
				{
					k=0;
					break;
				}
            if(l==x)
			{
				printf("%d",k);
				break;
			}
		}
}