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

int main(int argc, char* argv[])
{
	int n,a[6],i,p;
	scanf ("%d",&n);
	for (i=1;i<=6;i++)
	{
		a[i]=n%10;
		n=n/10;
	    if (a[i]==0)
		{
			p=i;
		break;
		}
	}
    for (i=1;i<p;i++)
	{
		printf ("%d",a[i]);
	}
	return 0;
}

