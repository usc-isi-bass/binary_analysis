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
 int a[300],*pa,*pb,b[300],i,j,k=1,m,n,t;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 pb=b;pa=a;
 b[0]=a[0];
 for(i=0;i<n;i++)
 { m=0;
  for(j=0;j<k;j++)
  { 
    if(*(pa+i)!=*(pb+j))
	m=m+1;
  }
  if(m==k)
  {
	 *(pb+k)=*(pa+i);k++;
  }
 }
 pb=b;
     for(i=0;i<k-1;i++)
		printf("%d,",*(pb+i));
	printf("%d",*(pb+k-1));
 
}