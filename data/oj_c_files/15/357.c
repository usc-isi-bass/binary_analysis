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
	int a,b,c,d,n,i,j,x,y,s,m[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&m[i][j]);
    for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(m[i][j]==0 && m[i+1][j]==0 && m[i][j+1]==0)
			{
				a=i;b=j;
			}
		    if(m[i][j]==0 && m[i][j-1]==0 && m[i-1][j]==0)
			{
				c=i;d=j;
			}
		}
	x=c-a-1;y=d-b-1;
	s=x*y;
	printf("%d",s);
}