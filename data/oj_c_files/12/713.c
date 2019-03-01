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

main()
{
int a[16],n,j,k,p,m;
do
{
a[0]=-1;
for(j=0,n=0;;j++)
{
	scanf("%d",&a[j]);
if(a[0]==-1)
{
	break;
}
if(a[j]==0) break;
n++;
}
m=0;
for(k=0;k<=n-1;k++)
{
for(p=k+1;p<=n;p++)
{
if(a[p]==(a[k]*2)||a[k]==(a[p]*2))
{
m++;
}

}
}if(a[0]==-1)
break;
printf("%d\n",m);


}while(a[0]!=-1);
return 0;
}