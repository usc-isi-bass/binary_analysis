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
	int n,i,j,l;
	char a[50][22];
    scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	for(i=0;i<n;i++)
	{
		l=strlen(a[i]);
		if(a[i][l-1]=='r'&&a[i][l-2]=='e')
		{for(j=0;j<l-2;j++)
				printf("%c",a[i][j]);
		printf("\n");}
			else	if(a[i][l-1]=='y'&&a[i][l-2]=='l')
			{for(j=0;j<l-2;j++)
				printf("%c",a[i][j]);
			printf("\n");}
				else	if(a[i][l-1]=='g'&&a[i][l-2]=='n'&&a[i][l-3]=='i')
				{for(j=0;j<l-3;j++)
				printf("%c",a[i][j]);
				printf("\n");}
				else 
						{for(j=0;j<l;j++)
				printf("%c",a[i][j]);
				printf("\n");}
				}
	return(0);
}


		
		



	


	
