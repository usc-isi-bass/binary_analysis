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

void main ()
{
	int i;
         double c[6];
	void reverse (double c[]);
	for (i=0;i<6;i++)
    {
		scanf ("%lf",&c[i]);
    }
     reverse (c);
}
   
    void reverse (double c[])
   {
		int i,k,m,b[6],a[6];
		for (i=0;i<6;i++)
		{
			m=(int)log10(fabs(c[i]))+1;
			a[i]=(int)c[i];
			b[i]=0;
                           for (k=0;k<m;k++)
			{  
			   
			    
		            b[i]=10*b[i]+(a[i]%10);	
			   a[i]=a[i]/10;
                              }
			printf("%d\n",b[i]);
		}
	}