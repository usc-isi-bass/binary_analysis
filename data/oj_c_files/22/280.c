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
{int a[1000],i,j,n=0,t,f=0;
 for(i=0;;i++)
 {scanf("%d",&a[i]);
  n+=1;
  if(getchar()=='\n')
	  break;
 }
 for(i=0;i<n;i++)
	 for(j=i+1;j<n;j++)
	 {if(a[i]<a[j]){t=a[i];a[i]=a[j];a[j]=t;}
	 }
 for(i=0;i<n;i++)
 if(a[0]>a[i])
 {printf("%d\n",a[i]);
  f=1;
  break;
 }
 if(f==0)printf("No\n");
}