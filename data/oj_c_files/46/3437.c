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
int sz[155][155];

int i,j,p,q,c=0,a,b,col,row;

scanf("%d%d",&row,&col);
for(i=0;i<row;i++)
{ 
	for(j=0;j<col;j++)
	{
	 scanf("%d",&(sz[i][j]));
	}
}
p=0,q=0,a=col,b=row;
while(1)
{
for(i=p,j=p;j<=p+a-1;j++)
{
if(c>=col*row)
break;
printf("%d\n",sz[i][j]); c++;

}
for(j=p+a-1,i=q+1;i<=q+b-2;i++)
{
if(c>=col*row)
break;
printf("%d\n",sz[i][j]); c++;

}
for(i=q+b-1,j=p+a-1;j>=p;j--)
{
if(c>=col*row)
break;
printf("%d\n",sz[i][j]); c++;

}
for(j=p,i=q+b-2;i>=q+1;i--)
{
if(c>=col*row)
break;
printf("%d\n",sz[i][j]); c++;

}

a-=2,b-=2;
p++,q++;
if(c>=col*row)
break;
}

return 0;
}
