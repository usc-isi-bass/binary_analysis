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

   int tran(long x)
   {
   long t=0,y=x;
   while(y>0)
   {
      t=10*t+y%10;
      y/=10;
      tran(y);
   }
   if (x==t)
     return(1);
   }
void main()
{
	int tran(long x);
	long m,n,i,j,s,t;
	scanf("%d%d",&m,&n);
	t=0;
	for (i=m;i<=n;i++)
	{
		s=0;
		for (j=2;j<i;j++)
		{
			if (i%j==0)
				s++;
		}
		if ((s==0)&&(tran(i)==1))
		{
			if (t>=1)
				printf(",");
			printf("%ld",i);
			t++;
		}
	}
	if (t==0)
		printf("no\n");
}




