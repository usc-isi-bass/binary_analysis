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
int a[100000],i,j,n,k,*p=a;
scanf("%d",&n);
for(i=0;i<n;i++)
	scanf("%d",&a[i]);                                //*p?????????
scanf("%d",&k);
p=a;
for(i=n-1;i>=0;i--)
{
	if(*(p+i)==k)                                       //????????????????????
	{
		for(j=i;j<n;j++)
		{
			*(p+j)=*(p+j+1);
		}
		n--;
	}
	                                                   //??????????????????
}
p=a;
for(i=0;i<n-1;i++)
{
	printf("%d ",*(p+i));
}
printf("%d",*(p+n-1));
return 0;
}