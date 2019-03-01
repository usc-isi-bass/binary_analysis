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
int a[1010];
int k,i,j,n;
scanf("%d %d",&n,&k);
for(i=0;i<=n-1;i++)
scanf("%d ",&a[i]);
for(i=0;i<=n-1;i++)
{
   for(j=0;j<=n-1;j++)
   {
	   if(a[i]+a[j]==k){
		   printf("yes");return 0;}
    }
}
printf("no");
return 0;
}