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
	int i,n,sum,j,k,a[1000]={0},b[1000]={0};
scanf("%d %d",&n,&sum);

for(i=0;i<n;i++)
{   
  scanf("%d ",&a[i]);
  b[i]=a[i];
}
for(j=0;j<n;j++)
{
	for(k=j;k<n;k++)
	{
		if((a[j]+b[k])==sum)
		{ printf("yes"); return 0;}
	}
}  
 printf("no"); 


return 0;
}