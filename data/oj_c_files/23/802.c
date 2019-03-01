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
	char str[100],c;
	int i,n,a,b,j,k,line;
    gets(str);
	n=strlen(str);
		b=n-1;
	for(i=n-1;i>=0;i--)
	{
		if(str[i]==' ')
		{
			a=i;
    	for(j=a+1;j<=b;j++)
		{
			printf("%c",str[j]);
			if(j==b) printf(" ");
		}
		      b=a-1;
		}
         if(i==0)
		{
			for(k=0;k<=b;k++)
			printf("%c",str[k]);
		}
	}
}