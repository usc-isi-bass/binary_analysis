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
int ax[100];
int a=0;
int i;
scanf("%d",&i);
while (a<=i-1)
{scanf("%d",&ax[a]);
a++;
}
int b=0,c,k=1;
while (k<i)
{b=0;
     while (b<i-k)
	 {
	      if(ax[b]>=ax[b+1])
		  {c=ax[b];
		   ax[b]=ax[b+1];
		   ax[b+1]=c;
		  }
	  b++;
	 }
k++;
}
printf("%d\n%d",ax[i-1],ax[i-2]);
return 0;
}