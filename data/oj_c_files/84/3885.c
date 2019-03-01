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
int a[100],n,i,j,b,c,t;
scanf("%d",&n);
for (i=0;i<n;i++)
scanf("%d",&a[i]);
b=a[0];
c=a[1];
if(b<c)
	{t=b;
     b=c;
	 c=t;
	}
for (j=2;j<n;j++)    
   {if(a[j]<b&&a[j]>c)
	   c=a[j];
	else if (a[j]>b)
	  {c=b;
	   b=a[j];
	  }
	}
printf("%d",b);
printf("\n");
printf("%d",c);
}
