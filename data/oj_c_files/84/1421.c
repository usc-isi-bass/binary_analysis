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
	int n,t1=0,t2=0,i=0;
	scanf("%d",&n);
	int sz[100];
	/*if(i==0)
		{
			scanf("%d",&t);
	}*/
			while(i<n)
	{
			scanf("%d",&sz[i]);
            if(i==0)
			{
					t1=sz[i];
					t2=sz[i];

			}
			else{
			if(t1<=sz[i])
			{
				t1=sz[i];
			}
			if(t2<=sz[i]&&t1>sz[i])
				t2=sz[i];
			}
		i++;
	}
	printf("%d\n%d",t1,t2);
	return 0;
}