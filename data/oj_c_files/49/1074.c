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

main()
{
	int i,j,l,k;
	char a[500],b[500];
	gets(a);
	l=strlen(a);
	for(i=2;i<=l;i++)
	{
		for(j=0;j<=l-i;j++)
		{
			strcpy(b,a);
			for(k=j;k<=j+i-1;k++)
			{
				b[k]=a[2*j+i-1-k];
			}
			if(strcmp(a,b)==0){for(k=j;k<=j+i-1;k++) printf("%c",a[k]); printf("\n");}
		}
	}
}