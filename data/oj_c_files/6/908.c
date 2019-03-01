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
int p,n,m,i,k,j,a[100][100] ,s[100];
	scanf("%d",&p);
	for(k=0;k<p;k++)
	{   s[k]=0;
		scanf("%d%d",&m,&n);
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
				if(i==0) s[k]+=a[i][j];
					else if((m-i-1)==0) s[k]+=a[i][j];
						else if(j==0) s[k]+=a[i][j];
							else if((n-j-1)==0) s[k]+=a[i][j];
			}
	}
	for(k=0;k<p;k++)
		printf("%d\n",s[k]);
return 0; 
}