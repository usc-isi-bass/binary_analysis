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
	float n,m,i,a=0,b=0,c=0,d=0,e,f,g,h;
    scanf("%f",&n); 
	for(i=0;i<n;i++)
	{scanf("%f",&m);
	 if((m>0)&&(m<19)) a++;
	 if((m>18)&&(m<36)) b++;
	 if((m>35)&&(m<61)) c++;
	 if(m>60) d++;
	}
	e=(float)(100*a/n);
    f=(float)(100*b/n);
    g=(float)(100*c/n);
    h=(float)(100*d/n);
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",e,f,g,h);
}
