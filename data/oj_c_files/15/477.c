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
        int n,i,j,x1=0,x2,y1=0,y2,num,s;
		scanf ("%d",&n);
		for (i=0;i<n;i++)
			for (j=0;j<n;j++)
			{
				scanf ("%d",&num);
				if (num==0)
				{
					if (x1==0)
						x1=i+1;
					x2=i;
					if (y1==0)
						y1=j+1;
					y2=j;
				}

			}
			s=(x2-x1)*(y2-y1);
			printf ("%d\n",s);
				

		
		return 0;
}