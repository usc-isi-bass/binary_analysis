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

main()
{
	int i,j,k,l,m,n,p=0,a[8][8];
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			for(k=0;a[i][k]<=a[i][j]&&k<n;)k++;
			if(k==n)
			{
				for(l=0;a[l][j]>=a[i][j]&&l<m;)l++;
				if(l==m){printf("%d+%d\n",i,j);p++;}
			}
		}
		if(p==0)
			printf("No\n");
}