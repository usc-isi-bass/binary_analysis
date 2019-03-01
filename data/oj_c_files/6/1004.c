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
int k,m,n,i,j,a[100][100],l,b[100];
scanf("%d",&k);
for(i=0;i<k;i++)
{b[i]=0;
scanf("%d%d",&m,&n);
for(j=0;j<m;j++)
{
	for(l=0;l<n;l++)
	{scanf("%d",&a[j][l]);
	if(j==0||j==m-1)
		b[i]+=a[j][l];
	else if(l==0||l==n-1)
		b[i]+=a[j][l];
	}
}
}
for(i=0;i<k;i++)
{printf("%d\n",b[i]);}
}