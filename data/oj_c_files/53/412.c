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
int n,a[300],i,j,k,m,b[300],t;
scanf("%d\n",&n);
for(i=0;i<n;i++)
   {scanf("%d",&a[i]);
    b[i]=1;
   }

for(i=0;i<n;i++)
   {for(j=0;j<i;j++)
    if(a[i]==a[j]) b[i]=0;
   }
	
for(k=n-1;k>=0;k--)	
	{if(b[k]!=0) 
       {t=k;
        break;
       }
    else continue;


    }
for(m=0;m<t;m++)
 {if(b[m]!=0)
  printf("%d,",a[m]);
  }
 printf("%d",a[t]);
}