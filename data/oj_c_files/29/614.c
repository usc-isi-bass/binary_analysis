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
	int m,n,i,j,fm1=1,fm2=1,fm;
	float s[1000]={0};
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		fm1=1;
                  fm2=1;
                  scanf("%d",&n);
		for(j=1;j<=n;j++)
		{
			fm=fm1+fm2;
			s[i]+=(float)fm/fm2;
                           fm1=fm2;
                           fm2=fm; 
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%.3f\n",s[i]);
	}
	return 0;
}
