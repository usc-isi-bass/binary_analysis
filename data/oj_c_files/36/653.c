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
	char a[20], b[20];
	int a_, b_, isbreak=0, i, j;
	scanf("%s%s", a, b);
	a_ = strlen(a);
	b_ = strlen(b);
	if(a_!=b_)
		printf("NO\n");
	else
	{
	for(i=0; i<a_; i++)
	{
		for(j=0; j<b_; j++)
		{
			if(b[i]==a[j])
			{
				a[j]='0';
				break;
			}
			if(j==b_-1)
			{
				isbreak=1;
				break;
			}
		}
		if(isbreak==1)
			break;
	}
	if(isbreak==1)
		printf("NO\n");
	else
		printf("YES\n");
	}
	return 0;
}

