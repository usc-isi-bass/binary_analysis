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
	int n,a,i,a1,a2,t,l,m;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		a1=1;a2=1;
		if(a==1)
			l=a1;
		else {
		     if(a==2)
		    	l=a2;
			 else {
				 l=2;
           		for(t=1;t<a-2;t++){
        			m=a2;
		        	a2=l;
					l+=m;
				}
			 }
		}
	printf("%d\n",l);
	}
    return 0;
}
