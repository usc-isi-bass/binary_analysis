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

void main()
{
	int a[1000],b[1000]={0},n,*p,i,j,k=0;p=a;
	scanf("%d",&n);
for(i=0;i<n;i++,p++)
scanf("%d",p);
p=a;
for(i=0;i<n;i++,p++)
{
	for(j=0;j<i;j++)
		if(*(a+j)==*p)b[i]++;
}
for(i=n-1;i>=0;i--)
if(b[i]==0){k=i;break;}
p=a;

for(i=0;i<k;i++,p++)
{
	if(b[i]==0)
	{
		printf("%d,",a[i]);
	}
}
printf("%d",a[k]);
}



