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
	int i,j,k=0,m=0,x;
	char a[10000],t;
	gets(a);
	for(i=0;a[i]!=' ';)
	i++;
		for(j=i+1;a[j]!='\0';)
			j++;
		if(j==2*i+1)
		{
			j=i+1;
			while(j<2*i+1)
			{
				for(k=j-i-1,x=0;k<i;k++)
					if(a[j]==a[k]) 
					{
                        t=a[k];
						a[k]=a[j-i-1];
						a[j-i-1]=t;
					    m++;
						j++;
						x=0;
					}
					else
						x++;
					if(x==2*i+1-j)
						j++;
			}
			
		}
		if(m==i)
			printf("YES");
		else
			printf("NO");
}
