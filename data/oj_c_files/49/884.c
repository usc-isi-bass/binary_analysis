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
 char a[500];
 int m,i,q,k,p,n;
 for (i=0;i<500;i++)
 {
	 scanf("%c",&a[i]);
	 if (a[i]=='\n')
		 break;
 }
 n=i;
 for (m=2;m<=n;m++)
 {
	 for(i=0;i<n-m+1;i++)
	 {
		 for (q=0;q<m-1;q++)
		 {
			 if(a[i+q]!=a[i+m-1-q])
				 p=p+1;
		 }
		 if(p==0)
		 { for (k=i;k<i+m;k++)
			 {
				 printf("%c",a[k]);
			 }
		 printf("\n");
		 }
		 p=0;
	 }
 }
 return 0;
 }
