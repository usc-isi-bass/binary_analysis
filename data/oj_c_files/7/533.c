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
	char a[100],b[100],c[100];
	int i,j,s,k,y;
	gets(a);
	gets(b);
	gets(c);
	for(i=0;i<strlen(a);i++)
	{
		    k=i;
			j=0;
			while(a[k]==b[j] && j<strlen(b))
			{
				k++;
				j++;
			}
			if(j==strlen(b))
			{
                                     y=0;
				for(s=i;s<i+strlen(b);s++)
				{
					a[s]=c[s-i];
					
				}y=1;

			}
			if(y==1) break;
	}
					
printf("%s\n",a);
return 0;
}
