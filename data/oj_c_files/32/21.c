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
	char a[100][100]={0},b[100][100]={0};
	int n,m,i,j,c[100][100],k,l;
	scanf("%d",&k);
	for(l=0;l<k;l++)
	{
	scanf("%s",a[l]);
	//printf("Now input b:\n");
	scanf("%s",b[l]);
	
	}
	printf("\n");
	for(l=0;l<k;l++)
	{
	n=strlen(a[l]);
	m=strlen(b[l]);
	for(i=n-1,j=m-1;i>=0;i--,j--)
	{
		if(j>=0)
		{
			c[l][i]=a[l][i]-b[l][j];
			if(c[l][i]<0)
			{
				c[l][i]+=10;
				a[l][i-1]-=1;
			}
		}
		else 
			c[l][i]=a[l][i]-'0';
	}
	//printf("The result is:\n");
	for(i=0;i<n;i++)
		printf("%d",c[l][i]);
	printf("\n");
	}
	return 0;
}


	