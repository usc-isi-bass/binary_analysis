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
	int i,j,z[100]={0},max=0,x[100],y[100],n;
	scanf("%d\n",&n);
	for(i=0;i<=n-1;i++)
		scanf("%d %d\n",&x[i],&y[i]);
	i=-1;
	for(j=0;;j++)
	{for(i=i+1;i<=n-1;i++)
	    {if(x[i]>=90&&x[i]<=140&&y[i]>=60&&y[i]<=90)
		    z[j]=z[j]+1;
		else break;}
	if(z[j]>max)
		max=z[j];
	if(i>=n) break;
	}
	printf("%d",max);
	return 0;
	
}