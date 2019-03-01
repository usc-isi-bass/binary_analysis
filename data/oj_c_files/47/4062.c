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
{int n=0;
    scanf("%d",&n);
    int i=0,as[100];
    while(i<n)
	{scanf("%d",&as[i]);
	i++;
	}
int zx[100];
i=0;
while(i<n)
{
	zx[i]=as[i];
	i++;
}
i=n-1;
while(i>0)
{
	printf("%d ",zx[i]);
		i--;
}
printf("%d",zx[0]);
}