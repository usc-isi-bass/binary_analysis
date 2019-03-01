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
{int n,*p,i=0,*q;
 scanf("%d",&n);
 p=(int*)malloc(sizeof(int)*n);
 q=(int*)malloc(sizeof(int)*n);
 for(i=0;i<n;i++)
 {scanf("%d",&p[i]);
 }
 for(i=0;i<n;i++)
 {*(q+n-i-1)=*(p+i);
 }
 for(i=0;i<n-1;i++)
 {printf("%d ",q[i]);
 }
 if (i==n-1)
 printf("%d",q[i]);
}