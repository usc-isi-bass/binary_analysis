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
{int i,j,n,k,m=1,flag=0,l;
 scanf("%d%d",&n,&k);
 for (l=1;;l++)
 {flag=0;
 for (m=l,i=1;i<=n;i++)
 {if (m%(n-1)!=0)
  flag=1;
 m=m+m/(n-1)+k;}
 if (flag==0)
	 break;}
 printf("%d",m);
}