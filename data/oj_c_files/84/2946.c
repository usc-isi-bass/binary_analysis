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
	int first=-1;
	int second=-1;
	int i, n, a;
	scanf("%d", &n);
	for(i=1;i<=n; i++)
	{
		scanf("%d", &a);
		if(i==2){
			if(a>first){
				second=first;
				first=a;
			}else{
				second=a;
			}
		}
		if (a>first)
		{second=first;
			first=a;
		}
		else
		{continue;}
	}
    printf("%d\n%d",first,second);
	return 0;
}

