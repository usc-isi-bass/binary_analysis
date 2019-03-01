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
	int l,t=0,i,j;
	char a[101]={0};
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if (a[i]==' ')
		{
			if(t==1)
			{
				for (j=i;j<l;j++)
					a[j]=a[j+1];
				i=i-1;
			}
			t=1;
		}
		else t=0;
	}
	printf("%s",a);
}