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
    char a[50],b[50],c;
	int i,j,d;
	scanf("%s %s",a,b);
	for(i=0;i<strlen(b);i++)
	{
		d=0;
		if(a[0]==b[i])
		{
		   d=1;
		   for(j=0;j<strlen(a);j++)
		   {
			    if(a[j]!=b[i+j])
				{
				  d=2;
				  break;
				}
		   }
		   if(d==1)
		   {
			   printf("%d",i);
			   break;
		   }
		}
	}
	return 0;
}
