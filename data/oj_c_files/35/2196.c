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
	int m,n,i,j,t=1,s=0,l=0;//m,hangshu,n,lieshu
	int a[10][10]={0},b[10]={0},c[10]={0};
	scanf("%d,%d",&m,&n);
		for(j=1;j<=m;j++)
	for(i=1;i<=n;i++)
	
			scanf("%d",&a[j][i]);
	
		for(j=1;j<=m;j++)
		{for(s=1;s<=n;s++)
		if(a[j][s]>b[j]){b[j]=a[j][s];c[j]=s;}
		for(s=1;s<=m;s++)
			if(a[s][c[j]]<b[j])
				t=0;
			if(t==1){printf("%d+%d\n",j-1,c[j]-1);l++;}
			t=1;

		}
		
	if(l==0)printf("No\n");
}