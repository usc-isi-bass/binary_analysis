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
int i,m,n,row,col,sz[5][5],e[5];
for(row=0;row<5;row++)
{
    for(col=0;col<5;col++)
	{scanf("%d",&sz[row][col]);}
}
scanf("%d %d",&n,&m);
if((n>=0&&n<=4)&&(m>=0&&m<=4))
{
	for(i=0;i<5;i++)
	{
		e[i]=sz[n][i];
	    sz[n][i]=sz[m][i];
		sz[m][i]=e[i];
	}
	for(row=0;row<5;row++)
	{
        for(col=0;col<5;col++)
		{
			if(col==0)
		    {
		      printf("%d",sz[row][col]);
			}
            else if(col==4)
		    {
		      printf(" %d\n",sz[row][col]);
            }
		    else if(col>0&&col<4)
				printf(" %d",sz[row][col]);
		}	
	}
return 0;
}
else
{printf("error\n");
return 0;
}
}