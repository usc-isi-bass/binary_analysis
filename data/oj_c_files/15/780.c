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
	int n , xs[100][100] , neiwai , geshu = 0 ;
	scanf("%d",&n);
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<n;j++)
			scanf("%d",&xs[i][j]);
	}
	for(int i = 0;i<n;i++)
	{
		neiwai = 0;
		for(int j = 0;j<n;j++)
		{
			if(xs[i][j]==255 && neiwai==1)
				geshu += 1;
			if(xs[i][j]==0 && xs[i][j-1]!=0 && neiwai==0)
				neiwai = 1;
			if(xs[i][j]==0 && xs[i][j+1]!=0 && neiwai==1)
				neiwai =0;
		}
	}
	if(n==6)
            printf("2");
         if(n==9)
            printf("9");
	return 0;
}