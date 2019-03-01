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

int zhiyinshu(int x)
{
	int i=2;
	while (i<x)
	{
		if (x%i==0)
		{
			return 0;
		}
		else
		{
			i++;
		}
	}
	return 1;
}
int main ()
{
    int i,j,x;
    scanf("%d",&x);
    for (i=3;i<j;i++)
    {
        j=x-i;
        if ((zhiyinshu(i)==1)&&(zhiyinshu(j))) printf("%d %d\n",i,j);
    }
    return 0;
}
