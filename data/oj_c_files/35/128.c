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

 

int m,n;// wide variable in front of all the functions

char cmin(int a[][N],char i,char k)
{
	char l;
	for(l=0;l<m;l++)
	{
		if(l==i)
			continue;
		else if(a[l][k]<a[i][k])
			return(0);
	}
	return(1);
}


void main()
{
	char i,j,k,flag=0;
	int a[N][N];
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);

	for(i=0;i<m;i++)
	{
		for(k=0,j=0;j<n;j++)
		{
			if(a[i][j]>a[i][k])
				k=j;
		}

		if(cmin(a,i,k)!=0)		
		{
			flag=1;
			printf("%d+%d",i,k);
			return;
		}
	}    
	if(flag==0)
		printf("No");
}
 

