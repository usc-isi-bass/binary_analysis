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

int col(int a,int b);
int main()
{int n,i,m,l;
scanf("%d",&n);
for(i=1;i<=n;i++)
   {scanf("%d",&m);
   l=col(m,2)+1;
   printf("%d\n",l);
   }
   return 0;
}
int col(int a,int b)
{int i,t,tt=0,sig=0;
for(i=b;(i<a/2)&&((a/i)>=i);i++)
  {
	if(a%i==0)
    {t=a/i;
     tt=tt+1+col(t,i);
     sig=1;
    }
  }
if(sig==0)
  tt=0;
 return(tt);
}