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

int b;
int jishu(int n);
int oushu(int n)
	{
		int a;
		a=n;
		n=n/2;
        printf("%d/2=%d\n",a,n);
		if(n==1)
			return(0);
		else if(n%2==0)
			return oushu(n);
		else
			return jishu(n);
	}
        int jishu(int n)
		{
		  int b;
		  b=n;
		  n=n*3+1;
          printf("%d*3+1=%d\n",b,n);
		  if(n==1)
          return(0);
		  else if(n%2==0)
			return oushu(n);
		  else
			return jishu(n);
		}

void main()
{
	scanf("%d",&b);
	if(b==1)
	{printf("End");return;}
	else if(b%2==0)
		oushu(b);
	else
		jishu(b);
    printf("End");
}