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
	char str[1000];
	int a,b,c,d,e,f,i,j,k,l0,l;
	gets(str);
	l0=strlen(str);
	for(l=2;l<=l0;l++)
	{

		for(i=0;i<=l0-l;i++)
		{

			a=0;
			for(j=0;j<l/2;j++)
			{

				if(str[i+j]!=str[l-j+i-1]) {a=1;break;}
			}
				if(a==0) 
			{
				for(j=i;j<i+l;j++)
					printf("%c",str[j]);
				printf("\n");
			}
		}
	}


}