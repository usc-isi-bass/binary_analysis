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
	int n,i,j,e,s,b;
	int a[100];
	scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
			for(j=0;j<n-1;j++)
             for(i=0;i<n-1-j;i++)
              if(a[i]>a[i+1])
			  {
                e=a[i];
                a[i]=a[i+1];
                a[i+1]=e;
			  }
             s=a[n-1];
			 b=a[n-2];
			 printf("%d\n%d",s,b);
}
  