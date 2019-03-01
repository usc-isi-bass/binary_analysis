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
	char a[10],b[10];
	int i,j;
	char m;
	scanf("%s %s",a,b);
	for(i=0;i<10;i++)
	{
		for(j=i;j<10;j++)
		{
			if(b[j]==a[i])
			{
				if(a[i]=='\0')
					break;
				m=b[i];
				b[i]=b[j];
				b[j]=m;
			}
		}
	}
	if(strcmp(a,b)!=0)
		printf("NO");
	else
		printf("YES");
}