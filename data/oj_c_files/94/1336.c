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
	int num[501];
	int up[501];
	int n,i1,i2,i3,t;
	scanf("%d", &n);
	i2=0;
	for(i1=0;i1<n;i1++)
	{
		scanf(" %d", &num[i1]);
		if(num[i1]%2==1)
		{
			up[i2]=num[i1];
			i2++;
		}
	}
	i3=0;
	while(i3<i2)
	{
		if(up[i3]>up[(i3)+1])
		{
			t=up[(i3)+1];
			up[(i3)+1]=up[i3];
			up[i3]=t;
			i3--;
			if(i3<0)
			{
				i3++;
			}

		}
		else
		{
			i3++;
		}
	}
	for(i3=1;i3<(i2);i3++)
	{
		printf("%d,",up[i3]);
	}
    printf("%d",up[i3]);
	return 0;
}

