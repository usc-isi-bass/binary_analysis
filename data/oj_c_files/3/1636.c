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
int n,k,sz[1000],b=0,c,q,i,j,e;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++){
scanf("%d",&sz[i]);
}
for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		q=sz[i]+sz[j];
		if(q==k) 
		{
			printf("yes");
			return 0;
		}
	}
}
printf("no");
//for(e=0;e<b;e++)
   //printf("%d ",q[e]);
/*for(e=0;e<b;e++)
{
	c=q[e]-k;
    if(c==0)
	{
		printf("yes");
		return 0;
	}
}
if(c!=0)
{
	printf("no");
}*/

return 0;
}


