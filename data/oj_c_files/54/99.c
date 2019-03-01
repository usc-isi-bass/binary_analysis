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

int undi(int n,int k,int p)
{int z=p,m=n;
  while(m>1)
  {if((z*n+k)%(n-1)==0)
    {m--;
     z=(z*n+k)/(n-1);}
   else break;}
   if(m>1) z=0;
   else z=z*n+k;
   return(z);
 }

void main()
{int n,k,p,s;
 scanf("%d %d",&n,&k);
 for(p=1;;p++)
  if(undi(n,k,p)!=0)
    break;
 s=undi(n,k,p);
 printf("%d",s);
}