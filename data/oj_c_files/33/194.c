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
	int n,len,i,j;
	char a[256];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&a);
		len=strlen(a);
		for(j=0;j<len;j++)
		{
			switch(a[j])
			{
			case 65:{a[j]=84;break;}
			case 84:{a[j]=65;break;}
			case 71:{a[j]=67;break;}
			case 67:{a[j]=71;break;}
			}
		}
		a[len]=0;
		printf("%s\n",a);
	}
	return 0;
}