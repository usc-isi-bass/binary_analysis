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
	int n,i,j,s[1000][1000],x1,y1,x2,y2,num;
	scanf("%d",&n);
	for(i=0;i<n;i++){for(j=0;j<n;j++)scanf("%d",&s[i][j]);}

		for(i=0;i<n;i++)for(j=0;j<n;j++)
		{
			if(s[i][j]==0&&s[i+1][j]==0&&s[i+2][j]==0&&s[i][j+1]==0
				&&s[i+1][j+1]==255)  
			{x1=i;y1=j;}
		}

		for(i=0;i<n;i++)for(j=0;j<n;j++)
		{
			if(s[i][j]==0&&s[i-1][j]==0&&s[i-2][j]==0
				&&s[i][j-1]==0&&s[i-1][j-1]==255)
			{x2=i;y2=j;}
		}
       num=(x2-x1-1)*(y2-y1-1);
         printf("%d",num);
return 0;
}