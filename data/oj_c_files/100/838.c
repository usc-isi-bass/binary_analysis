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

int main ()
{  
	char s[1000];
	gets(s);
	int l,m,k,i,a[30];
	l=strlen(s);
	m=1;
    for(k=97;k<=122;k++)
	{
		a[k]=0;
		for(i=0;i<l;i++)
		{
			if(s[i]==k)
			{
				m=2;
				a[k]++;
			}
		}
		if(a[k]!=0)
		{
			printf("%c=%d\n",k,a[k]);
		}
	}
	if(m==1) printf("No\n");
	return 0;
}