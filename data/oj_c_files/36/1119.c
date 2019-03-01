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
	int la=strlen(a),lb=strlen(b);
	int i,j;char c;
	if(la!=lb) printf("NO");
	else
	{
		for (i=0;i<la;i++)
			for(j=i+1;j<la;j++)
			{
				if(a[i]<a[j])
				{
					c=a[i];a[i]=a[j];a[j]=c;
				}
			}
		for (i=0;i<lb;i++)
			for(j=i+1;j<lb;j++)
			{
				if(b[i]<b[j])
				{
					c=b[i];b[i]=b[j];b[j]=c;
				}
			}
		if (strcmp(a,b)==0) printf("YES");
		else printf("NO");
	}
	return 0;
}