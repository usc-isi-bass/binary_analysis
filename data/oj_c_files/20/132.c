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
	int n,i,j,Asc,point;
	char str[10],substr[3];
	while (scanf("%s%s",str,substr)==2)
	{
		point=0;Asc=0;
		for (i=0;i<=strlen(str);i++)
			if (str[i]>Asc)
			{
				Asc=str[i];
				point=i;
			}
		for (i=0;i<=point;i++) 
			printf("%c",str[i]);
		for ( j=0;j<strlen(substr);j++)
			printf("%c",substr[j]);
		for (i=point+1;i<strlen(str);i++) 
			printf("%c",str[i]);
                   printf("\n");
	}
}
