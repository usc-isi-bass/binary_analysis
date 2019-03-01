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
	char a[50][100],b[50][100];
    int n,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%s",a[i],b[i]);
	for(i=0;i<n;i++)
	{
		for(j=strlen(a[i])-1,k=strlen(b[i])-1;k>=0;j--,k--)
		{
			a[i][j]=a[i][j]-b[i][k]+'0';
		    if(a[i][j]<'0')
			{
				a[i][j]=a[i][j]+10;
			    a[i][j-1]=a[i][j-1]-1;
			}
		}
	printf("%s\n",a[i]);
	}
}
