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
{ int m,n,k,mark=0,i,num,l;
  scanf("%d%d",&n,&k);
  for(m=1;mark==0;m++)
   { num=0;l=m;
     for(i=0;i<n;i++)
	    { if(l%(n-1)==0)
	         {l=n*l/(n-1)+k;num++;}
          else break;
        } 
     if(num==n){printf("%d\n",l);mark=1;}
   }
}   