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


int mat[300];

int main()
{
	int n,sum=0;
	while(scanf("%d",&n),n!=-1)
	{
		if(n)
		{
			mat[n]=1;
			if(mat[n<<1])
				sum++;
			if(!(n&1)&&mat[n>>1])
				sum++;
		}
		else
		{
			printf("%d\n",sum);
			sum=0;
			memset(mat,0,sizeof(mat));
		}
	}
}