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
	int n,i,m,q,j,k,l,r;
	scanf("%d",&n);
	i=6;
	while (i<=n) 
	{
		m=3;
		q=1;
		while ((m<=(i/2))&&(q==1))
		 {
			j=2;
            k=1;
		    while ((j<=sqrt(m))&&(k==1))
			 {
			    if (m%j==0) k=0;
			    j++;
			 }
		    if (k==1) 
			 {
				l=i-m;
				j=2;
                r=1;
		        while ((j<=sqrt(l))&&(r==1))
				 {
			        if (l%j==0) r=0;
			        j++;
				 }
				if (r==1) 
				 {
					q=0;
					printf("%d=%d+%d\n",i,m,l);
				 }
			 }
			m++;
		 }
		i=i+2;
	}
}

			
		