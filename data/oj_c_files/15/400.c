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
{    long i,j,q,e,n,w,m,s;
     int a;scanf("%d",&n);
	 a=1;
	 i=0;	
	 while (a!=0)
	 {i++;
	 scanf("%d",&a);}
	 q=i;
	 m=n*n;
	 e=i;
	 w=0;
	 for (j=i;j<=m;j++)
	 {scanf("%d",&a);
	 if (a==255) 
		 w++;
	 if (a==0) 
	 {e++;e=e+w;w=0;}
	 }
          if((q%n-e%n)>=0)
	 {s=((e-e%n)/n-(q-q%n)/n-1)*((q%n-e%n)-1);}
          else
           {s=((e-e%n)/n-(q-q%n)/n-1)*((e%n-q%n)-1);}
	 printf("%ld",s);
	 return 0;
}
