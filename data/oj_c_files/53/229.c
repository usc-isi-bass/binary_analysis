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
 int a[300],b[100],n,m,p,s,t,k;
 scanf("%d",&n);
 for (m=0;m<n;m++)
 {
	 scanf("%d",&a[m]);
 }
 m=0;
 p=0;
 do
 {
	 b[p]=a[m];
	 if (m!=0)
		 printf(",");
	 printf("%d",b[p]);
	 s=m+1;
	 while(s<n)
	 {
		 if(b[p]==a[s])
		     a[s]=0;
		 else ;
		 s=s+1;
	 }
lable:    m=m+1;
	 if ((a[m]==b[p])||(a[m]==0))
		 goto lable;
	 else ;
	 p=p+1;
 }
 while(m<n);
}