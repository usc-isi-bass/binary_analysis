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
    int n,i,l,l0=0,l1=50,p,q;
	char a[200][50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++)
	{
		l=strlen(a[i]);
		if(l>l0)
		{
			l0=l;
			p=i;
		}
	    if(l<l1)
		{
			l1=l;
			q=i;
		}
	}
	printf("%s\n",a[p]);
	printf("%s",a[q]);
	return 0;
}

