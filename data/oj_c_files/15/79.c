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
int n,i,j,num=0,sum=0,a[50][50];
scanf("%d",&n);
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
	scanf("%d",&a[i][j]);
	if (a[i][j]==0)sum+=1;
	num=(sum/4-1)*(sum/4-1);
	}
printf("%d\n",num);
return 0;
}