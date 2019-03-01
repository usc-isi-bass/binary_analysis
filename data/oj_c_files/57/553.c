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
int n,i,j,d,k;
char a[100][100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%s",a[i]);
}

for(i=0;i<n;i++)
{
	j=strlen(a[i]);
    
    if(a[i][j-1]=='g')
	{
		for(k=0;k<j-3;k++)
		{
			printf("%c",a[i][k]);
		}
		 printf("\n");
	}
	else
	{
       		for(k=0;k<j-2;k++)
		{
			printf("%c",a[i][k]);
		}
		 printf("\n");
	}
}
}