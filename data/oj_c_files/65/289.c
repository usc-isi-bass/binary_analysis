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
	int n,a=0,b=0,i;
	int A,B;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&A,&B);
		if(A!=B)
		{
			if(A==0)
			{
				if(B==1)
					a++;
				else
					b++;
			}
				if(A==1)
			{
				if(B==2)
					a++;
				else
					b++;
			}
					if(A==2)
			{
				if(B==0)
					a++;
				else
					b++;
			}
		}
	}
	if(a>b)
		printf("A");
	if(a<b)
		printf("B");
	if(a==b)
		printf("Tie");
	return 0;
}