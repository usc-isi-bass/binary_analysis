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
{int i,j,m,n,flag,h[22][22]={0},*pa;
 scanf("%d%d",&m,&n);
 for (i=1;i<=m;i++)
     for (j=1;j<=n;j++)
		 scanf("%d",&h[i][j]);
 for (i=1;i<=m;i++)
     for (j=1;j<=n;j++)
	 {flag=1;
	  pa=*(h+i)+j;
      if (*pa<h[i-1][j])
		  flag=0;
	  if (*pa<h[i+1][j])
		  flag=0;
	  if (*pa<h[i][j+1])
		  flag=0;
	  if (*pa<h[i][j-1])
		  flag=0;
	  if (flag==1)
		  printf("%d %d\n",i-1,j-1);
	 }
}