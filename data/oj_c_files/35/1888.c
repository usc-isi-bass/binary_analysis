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

int m,n,a[8][8];
int hang(int h)
{
	int i,temp=a[h][0],l=0;
	for(i=1;i<n;i++)
		if(a[h][i]>temp)
		{
			temp=a[h][i];
			l=i;
		}
	return l;
}
int lie(int l)
{
	int i,temp=a[0][l],h=0;
	for(i=1;i<m;i++)
		if(a[i][l]<temp)
		{
			temp=a[i][l];
			h=i;
		}
	return h;
}

void main()
{
	int i,j;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<m;i++)
		if(lie(hang(i))==i)
		{
			printf("%d+%d",i,hang(i));
			break;
		}
	if(i==m)
		printf("No");
}
