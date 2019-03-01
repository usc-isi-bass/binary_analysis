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
	int m,j1,j2,i,d;
	scanf("%d",&m);
	for(j1=3;j1<=m/2;)
	{
         for(i=2;i<j1;i++)
		 {
			 d=j1%i;
			 if(d==0)break;
		 }
		 if(d==0){j1=j1+1;continue;}
		 else
		 {
			 j2=m-j1;
             for(i=2;i<j2;i++)
			 {
				 d=j2%i;
				 if(d==0)break;
			 }
		 }
		 if(d==0){j1=j1+1;continue;}
		 else{printf("%d %d\n",j1,j2);}
		 j1=j1+1;
	}
	return 0;
}