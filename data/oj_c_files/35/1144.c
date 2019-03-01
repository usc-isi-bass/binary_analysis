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
	int ws[8][8];
	int i,j,n,m,a,b,h,k,t,aa,g;
	int rp=0;
	scanf("%d,%d",&n,&m);
	aa=10000;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&ws[i][j]);
		}
	}
	for(h=0;h<n;h++)
	{
		for(k=0;k<m;k++)
		{
			if(ws[h][k]>rp)
			{
				rp=ws[h][k];
				a=h;
				b=k;
			}
		}
		

		for(g=0;g<n;g++)
		{
			if(ws[g][b]<aa)
			{
				aa=ws[g][b];
				t=g;
			}
		}
		if(t==a){
			printf("%d+%d",a,b);
				break;
		}
		else{
			a=-1;
			rp=0;
			aa=10000;
			continue;
		}




	
	}
		
	if(a==-1){
		
		printf("No");
	}
		return 0;
}
