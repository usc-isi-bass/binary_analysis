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
	int n,i,d,k,a,b[21],c[21];
	b[1]=1; b[2]=1;
	scanf("%d\n",&n);
	for (i=1;i<=n;i++)
		scanf("%d\n",&c[i]);
        for (i=1;i<=n;i++)
          {
             d=c[i];
                for (k=3;k<=d;k++)
			b[k]=b[k-2]+b[k-1];
               printf("%d\n",b[d]);
	}
}