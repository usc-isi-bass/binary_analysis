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
{   char c;
	int count=0,i=0,a[301],j;    for(j=0;j<301;j++)   a[j]=0;
	do{    scanf("%c",&c);
	if(c!=' ') { if(count==0)
	
		{
			count=1;
			a[i]++;
		}
                   if(count==1)
                      a[i]++;
                  }
		else if(c==' ')
			if(count==1)
			{
				count=0;
				i++;
			}
               }while(c!='\n');
			for(j=0;j<i;j++)
			 printf("%d,",a[j]-1);
			printf("%d",a[i]-2);
}
 

