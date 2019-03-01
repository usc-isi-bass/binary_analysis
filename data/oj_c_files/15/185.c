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
{ int p[100][100];
int n,i,j,h,k,m,l,a=0,b=0,sum;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{scanf("%d",&p[i][j]);
	}
}
for(h=0;h<n;h++)
{
for(k=0;k<n;k++)
{if (p[h][k]==0) a++;
}
if(a!=0) break;
}
for(m=0;m<n;m++)
{
	for(l=0;l<n;l++)
	{
		if(p[l][m]==0) b++;
	}
	if(b!=0) break;
}
sum=(a-2)*(b-2);
printf("%d\n",sum);
}

