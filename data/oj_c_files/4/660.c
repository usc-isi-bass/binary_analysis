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
	int R,C,i,j,k,l,m,n;
	int a[100][100];
	scanf("%d %d",&R,&C);
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<C;j++)
	{   
		i=0;
		while(i<=j)
		{ 
			k=j-i;
			printf("%d\n",a[i][k]);
			i++;
			if(i>R-1){break;}
		}
	}
	for(l=C;l<R+C-1;l++)
	{
       m=l-C+1;
	   while(m<=l)
	   {
           n=l-m;
		   printf("%d\n",a[m][n]);
		   m++;
		   if(m>R-1) {break;}
	   }
	}
	return 0;
}

