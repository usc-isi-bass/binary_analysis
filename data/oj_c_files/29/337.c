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
{
	int m;
	scanf("%d",&m);
	for(int z=0;z<m;z++)
	{
		int n;
		scanf("%d",&n);
                  if(n==1)
                  {
                      printf("2.000\n");
                           continue;
                   }
		int a=2,b=1,c=3,d=2,c1,d1;
		float s=(float)2/1+(float)3/2;
		for(int i=2;i<n;i++)
		{
			c1=c;
			d1=d;
			c=a+c;
			d=b+d;
			a=c1;
			b=d1;
			s=s+(float)c/(float)d;
		}
		printf("%.3f\n",s);
	}
	return 0;
}

