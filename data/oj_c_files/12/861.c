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

void main()
{
	int i,j,k,num[16],f;
	scanf("%d",&num[1]);
	do
	{
		k=1;
		f=0;
		do
		{
			k++;
			scanf("%d",&num[k]);
		}
		while (num[k]!=0);
		for (i=1;i<=k-1;i++)
			for (j=1;j<=k-1;j++)
				if (num[i]==num[j]*2)
					f++;
		printf("%d\n",f);
		scanf("%d",&num[1]);
	}
	while (num[1]!=-1);
}