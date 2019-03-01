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
    int i,j,k,a,b,c;
	for (i=1;i<=3;i++)//??
	     for (j=1;j<=3;j++)
			 for (k=1;k<=3;k++)
			 {
				 a=(j>i)+(i==k);
				 b=(i>j)+(i>k);
				 c=(k>j)+(j>i);
				 if ((i-j)*(a-b)<0&&(i-k)*(a-c)<0&&(j-k)*(b-c)<0)
				 {
					 for(a=1;a<=3;a++)
					 {
						 if (a==i) cout<<'A';
						 if (a==k) cout<<'C';
						 if (a==j) cout<<'B';
					 }
					 return 0;
				 }
			 }
	return 0;
}
