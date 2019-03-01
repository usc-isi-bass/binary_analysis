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
	int A=0,B=0,C=0;
	char d[4]={'0','0','0','0'};
	int i=0,j=0,k=0;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
			{
				if(i==j)continue;
				for(k=0;k<=2;k++)
				{
					if(i==k||j==k)continue;
					A=(j>i);
					B=(i>j)+(i>k);
					C=(k>j)+(j>i);
					if((A==(2-i))&&(B==(2-j))&&(C==(2-k)))
					{
						d[i]='A';d[j]='B';d[k]='C';
					}
				}
		}
	}
	for(i=0;i<=2;i++)cout<<d[i];
	return 0;
}