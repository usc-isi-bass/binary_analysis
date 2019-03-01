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
    int n,i,j,a,b,c,d,f=0;
    scanf("%d",&n);
    int sz[1000][1000];
       for(i=0;i<n;i++)
    { 
       for(j=0;j<n;j++)
       {
           scanf("%d ",&sz[i][j]);
		   if(sz[i][j]==0&&f==0)
		   {
			   a=i;
			   b=j;
			   f=1;
		   }
		   if(sz[i][j]==0)
		   {
			   c=i;
			   d=j;
		   }
        }
    }
       
  printf("%d",(d-b-1)*(c-a-1));
    return 0;
}