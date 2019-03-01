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
	 int a[999],n=0,i,d,z,e;
	 while(scanf("%d,",&a[n])!=EOF)n++;
	 d=a[0];
	 e=0;
	 z=0;
	 for(i=0;i<n;i++)
	 {
		 if(d<a[i])d=a[i];
	 }
	 for(i=0;i<n;i++)
	 {
		 if(e<a[i]&&a[i]<d)
		 {
			 z=1;
			 e=a[i];
		 }
	 }
	 if(z==0)printf("No");
	 else printf("%d",e);
}
