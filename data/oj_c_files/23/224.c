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
	char a[100],b[100][100];
	int n=1,i,num=0,j;
	gets(a);
    n=strlen(a);
	for(i=0;i<n;)
	{
		if(a[i]!=' ')
		{
			j=0;
			do
			{
				b[num][j]=a[i];
                i++;
				j++;
			}while(a[i]!=' ');
			b[num][j]='\0';
			num++;	
		}	
		else i++;
	}
	for(i=num-1;i>=0;i--)
	{
		if(i<num-1)
			putchar(' ');
		printf("%s",b[i]);
	}
}