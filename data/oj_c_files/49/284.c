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
	int s,i,j,n,r,ok;
	char a[505];
	gets(a);
	n=strlen(a);
	for (r=2;r<=n;r++)
		for (i=0;i<=n-r;i++)
		{
			ok=1;
			j=i+r-1;
		    for (s=i;s<=i+(j-i)/2;s++)
				if (a[s]!=a[j+i-s])
				{ok=0;break;}
			if (ok)
			{
				for (s=i;s<=j;s++)
					printf("%c",a[s]);
                printf("\n");
            }
		}
    
	return 0;
}
