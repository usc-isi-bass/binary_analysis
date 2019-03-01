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
	int a[8][8];
	int m,n;
	scanf("%d,%d",&m,&n);
	int i,j,tag[8]={0},temp[8]={0},k[8]={0},b=0;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(a[i][j]>temp[i])
			{
				temp[i]=a[i][j];
				tag[i]=j;
			}
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
			if(a[i][tag[i]]>a[j][tag[i]])
				k[i]=1;
	for(i=0;i<m;i++)
		if(k[i]==0)
		{
			b=1;
			printf("%d+%d",i,tag[i]);
			break;
		}
		if(b==0)
			printf("No");
}