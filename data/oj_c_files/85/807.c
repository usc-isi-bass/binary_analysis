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
	char a[21];
	int i,j,n,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		b=1;
		scanf("%s",a);
		for(j=0;;j++)
		{	
			if(a[j]=='\0')
			{
				break;
			}
				if(a[0]>='0'&&a[0]<='9')
			{
				printf("no\n");
				b=0;
				break;
			}
			if(!((a[j]>='A'&&a[j]<='Z')||((a[j]>='a')&&a[j]<='z')||a[j]=='_'||(a[j]>='0'&&a[j]<='9')))
			{
				printf("no\n");
				b=0;
			    break;
			}
			
		}
		if(b==1)
		{
			printf("yes\n");
		}
	}
	return 0;
}
