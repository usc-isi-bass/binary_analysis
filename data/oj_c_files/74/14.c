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
{int a,b,i,j,k,s,t=0;
 scanf("%d %d",&a,&b);
 for(i=a;i<=b;i++)
 {for(j=2;j<=sqrt(i);j++)
    if(i%j==0)
		break;
	if(j>sqrt(i))
	{k=i;
	 s=0;
	 while(k>0)
	 {s=10*s+k%10;
	 k=k/10;}
	 if(s==i)
	 {if(t!=0)
	  printf(",");
	  printf("%d",i);
	  if(t==0)
		  t++;}
	}
	}
 if(t==0)
	 printf("no");
}