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
	int a[10][10]={0},m,n,i,j,b[10]={0},c[10]={0},k=0,l=0;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			if(a[i][j]>b[i])b[i]=a[i][j];
        for(j=0;j<n;j++)
			if(a[i][j]==b[i])c[i]=j;
	}
    for(i=0;i<m;i++,k=0)
	{
		for(j=0;j<m;j++)
			if(b[i]>a[j][c[i]])k=1;
		if(k==0){printf("%d+%d",i,c[i]);break;}
		else l++;
	}
	if(l==m)printf("No");
}