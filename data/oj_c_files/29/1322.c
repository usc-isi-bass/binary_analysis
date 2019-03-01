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
	double s[100],a,b,d,e;
	int m,c[100],i;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&c[i]);
	}

	for(i=0;i<m;i++){	
		a=2.000;b=1.000;
		e=2.000;
		if(c[i]==1){
           s[i]=e;
		}
		if(c[i]!=1){
            for(int j=1;j<c[i];j++){
                d=a;
		 	    a=a+b;
			    b=d;
			    e=e+a/b;
			}
	    s[i]=e;	
		}
	}
	
	for(int k=0;k<m;k++){
		printf("%.3lf\n",s[k]);
	}
	return 0;
}
