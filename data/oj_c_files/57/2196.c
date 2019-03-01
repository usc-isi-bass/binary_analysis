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
	int n,i,le,j;
	char a[50][15],b[50][15]={' '};
    scanf("%d",&n);
	for(i=0;i<n+1;i++)
	{
		gets(a[i]);
	}
    for(i=0;i<n+1;i++)
	{
		le=strlen(a[i]);
		for(j=le-3;j<le;j++)
		{
			if(a[i][le-2]=='e'&&a[i][le-1]=='r') 
			{strncpy(b[i],a[i],le-2);}
			 

          if(a[i][le-2]=='l'&&a[i][le-1]=='y')
		  { strncpy(b[i],a[i],le-2);}
			 
            if(a[i][le-3]=='i'&&a[i][le-2]=='n'&&a[i][le-1]=='g')
			{ strncpy(b[i],a[i],le-3);}
			 
		}
		printf("%s\n",b[i]);
	}
}