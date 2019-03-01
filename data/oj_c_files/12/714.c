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
	int i,j,n,num[15],out;
	while (1)
	{
		n=-1;
		out=0;
		scanf("%d",&i);
		if (i==-1) break;
		num[++n]=i;
		while (1)
		{
			scanf("%d",&i);
			if (i==0) break;
			num[++n]=i;
		}
		for (i=0;i<=n-1;i++)
			for (j=i+1;j<=n;j++)
				if (num[j]==2*num[i] || num[i]==2*num[j]) out++;
		printf("%d\n",out);
	}
	return 0;
}