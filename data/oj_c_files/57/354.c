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
	int n,l,i,j;
	char a[20][20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	for(i=0;i<n;i++)
	{
		l=strlen(a[i]);
		if(a[i][l-1]=='r')
		{
			for(j=0;j<l-2;j++)
			{
				printf("%c",a[i][j]);
			}
			printf("\n");
		}	
		else if(a[i][l-1]=='y')
		{
			for(j=0;j<l-2;j++)
			{
				printf("%c",a[i][j]);
			}
				printf("\n");
		}
		else
		{	
			for(j=0;j<l-3;j++)
			{
				printf("%c",a[i][j]);
			}
				printf("\n");
		}
	}
		
}