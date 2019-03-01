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
	char c,str[100];
	int i,k,j,e,number;
	gets(str);
	number=strlen(str);
	k=number-1;
	for(i=number-1;i>=0;i--)
	{
		if(str[i]==' ')
		{
			e=i;
		   for(j=e+1;j<=k;j++)
		     printf("%c",str[j]);
		   if(j==k+1) printf(" ");
			 k=e-1;
		}
		if(i==0)
			for(j=0;j<=number-1&&(str[j])!=' ';j++)
				printf("%c",str[j]);

	}
	
}