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
	int t,n,i,j;
	char a[100][10];
	scanf("%d",&t);
	for(i=0;i<t;i++)
		scanf("%s",a[i]);
		for(i=0;i<t;i++)
		{
			n=strlen(a[i]);
		if((a[i][n-2]=='e' && a[i][n-1]=='r') || (a[i][n-2]=='l' && a[i][n-1]=='y'))
		{
			for(j=0;j<n-2;j++)
				printf("%c",a[i][j]);
		}
		if(a[i][n-3]=='i' && a[i][n-2]=='n' && a[i][n-1]=='g')
		{
			for(j=0;j<n-3;j++)
				printf("%c",a[i][j]);
		}
		printf("\n");
		}
		
}
              
