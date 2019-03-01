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
	char str[500];
	int a,t;
	int i=0,j=0,k=2,flag=1;
    scanf("%s",str);
	a=strlen(str);
	for(k=2;k<=a;k++)
	{
		for(i=0;i<a;i++)
		{   flag=1;
		    j=i;
			for(j=i;j<=i+k-1;j++)
			{
				if(str[j]!=str[2*i-j+k-1])
					flag=0;

			}
			if(flag==1)
			{ t=i;
			   for(t=i;t<=i+k-1;t++)
			   {	printf("%c",str[t]);
			   }
			   printf("\n");

			}
		}
	}
	return 0;
}