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
	char a[100];
	int i,j,k,t;
	gets(a);
	for(t=0;t<100;t++)
	for(i=0;i<strlen(a);i++)
	{
		for(j=0;j<=strlen(a);j++)
		{
			if(a[j]==' '&&a[j+1]==' ')
			{
				for(k=j;k<strlen(a)-1;k++)
				{
					a[k]=a[k+1];
				}
				a[strlen(a)-1]='\0';
				break;
			}
		}
	}
	puts(a);
	return 0;
}