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
{int m,p,q,i,j;
 scanf("%d",&m); 
 for(i=3;i<=(m/2);i=i+2)
 {
	 {
	 for(j=2;j<=sqrt(i);j++)
	 if(i%j==0)break;
     if(j>sqrt(i)) p=1;
	 else p=0;
     for(j=2;j<=sqrt(m-i);j++)
	 if((m-i)%j==0)break;
     if(j>sqrt(m-i))
		 q=1;
	 else q=0;
	 }
  if(p==1&&q==1)printf("%d %d\n",i,m-i);
}
return 0;
}
