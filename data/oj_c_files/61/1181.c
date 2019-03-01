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
	int n,a[100],f1,f2,i,t,j;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
    for (i=0;i<n;i++)
	{   f1=1;
	    f2=1;
		for (j=2;j<a[i];j++)
		{
			t=f1;
			f1=f2;
			f2=f2+t;
		}
	printf("%d\n",f2);}

}