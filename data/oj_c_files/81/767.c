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

int main(){
int u[5][5],i,j;
for(i=0;i<5;i++)
{
   for(j=0;j<5;j++)
   {
      scanf("%d",&u[i][j]);
   }
}
int n,m;
scanf("%d%d",&m,&n);
if(n>4||m>4)
{
	printf("error\n");
}
else  
{
int t;
t=m;
m=n;
n=t;
for(i=0;i<n;i++)
{
	for(j=0;j<4;j++)
	{
	    printf("%d ",u[i][j]);
	}
	printf("%d\n",u[i][4]);
}
for(j=0;j<4;j++)
{
printf("%d ",u[m][j]);
}
printf("%d\n",u[m][4]);
for(i=n+1;i<m;i++)
{
	for(j=0;j<4;j++)
	{
	    printf("%d ",u[i][j]);
	}
	printf("%d\n",u[i][4]);
}
for(j=0;j<4;j++)
{
printf("%d ",u[n][j]);
}
printf("%d\n",u[n][4]);
for(i=m+1;i<5;i++)
{
  	for(j=0;j<4;j++)
	{
	    printf("%d ",u[i][j]);
	} 
	printf("%d\n",u[i][4]);
}
}

return 0;
}