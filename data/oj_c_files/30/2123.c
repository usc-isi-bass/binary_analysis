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
	int n,g,s=0,i,S=0;
	scanf("%d",&n);
         if(n<100){
	for(i=1;i<=n;i++)
	{
		g=i%10;
		s=i/10;
		if(g!=7 && s!=7 && i%7!=0)
		{
			S+=pow(i,2);
		}
	}
        }
	printf("%d\n",S);
      return 0;
}
