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
	int a[100][100]={0},row,col,i=0,j=0,t=0,s=0;
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	}
	i=0;
	j=0;
	do
	{
		for(j=t;j<col-t;j++)
			printf("%d\n",a[i][j]);
   		j-=1;
		if(2*s+1==row) break;
        for(i=s+1;i<row-s;i++)
			printf("%d\n",a[i][j]);
		i-=1;
	    t+=1;
		if(col==t+s) break;
	    for(j=col-t-1;j>=s;j--)
			printf("%d\n",a[i][j]);
		j+=1;
	    s+=1;
		if(row==s+t) break;
	    for(i=row-s-1;i>=t;i--)
			printf("%d\n",a[i][j]);
		i+=1;
		if(col==2*t) break;
	}
	while(t!=col && s!=row);
	return 0;
}

