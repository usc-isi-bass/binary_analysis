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


int main(int argc, char* argv[])
{   int n,i,s=0;
    scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{
		if(i%7==0)
		{ s=s+0;
		}
		else if (i/10==7)
		{ s=s+0;
		}
		else if( i%10==7)
		{ s=s+0;
		}
		else
		{ s=s+i*i;
		}
	}
	printf("%d",s);
	
	return 0;
}