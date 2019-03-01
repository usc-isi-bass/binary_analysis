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
	char str[5000];
	int i,j=0,n=0;
	gets(str);
	for(i=0;str[i]!=0;i++,n++)
	{
		if(str[i]==' ')
		{
			
			if(n>0) 
			{
				if(j==0) {printf("%d",n);j=1;}
			    else printf(",%d",n);
			}
			n=-1;
		}
	}
	if(j==0) {printf("%d",n);j=1;}
	else printf(",%d",n);
}