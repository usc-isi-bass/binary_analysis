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
	char a[200],b[200];
	scanf("%s %s",a,b);
	int x,y;
         x=strlen(a);
         y=strlen(b);
	int i,j;
         char t;
	if(x!=y) printf("NO");
	else
	{
		for (i=0;i<x;i++)
			for(j=i+1;j<x;j++)
			{
				if(a[i]<a[j])
				{
					t=a[i];a[i]=a[j];a[j]=t;
				}
			}
		for (i=0;i<y;i++)
			for(j=i+1;j<y;j++)
			{
				if(b[i]<b[j])
				{
					t=b[i];b[i]=b[j];b[j]=t;
				}
			}
		if (strcmp(a,b)==0) printf("YES");
		else printf("NO");
	}
	return 0;
}