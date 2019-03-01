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
{
	int i,n;
	int t;
	int max,secondmax;
	scanf("%d%d",&n,&t);
	max=secondmax=t;
	for(i=1;i<n;i++)
	{
		scanf("%d",&t);
		if((t<max)&&(t>secondmax))
        {
			secondmax=t;
		}
		else 
			if(t>max)
		{
			secondmax=max;
            max=t;
		}
	}
	printf("%d\n%d",max,secondmax);
	return 0;
}