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
	int a[1000];
	int n,i,j,a1,a2,b1,b2,s;
	int *p;
	int flag=0;
	scanf("%d",&n);
	for(i=0;i<n;)
	{
		for(p=a;p<a+n;)
		{
			scanf("%d",p);
			if(*p!=0)
			{
				p++;
				continue;
			}
			flag=1;
			break;
		}
		if(flag==0)
		{
			i++;
			continue;
		}
		a1=p-a;
		b1=i;
		for(p=p+1;p<a+n;p++)
		{
			scanf("%d",p);
			if(*p!=0)
				break;
		}
		a2=p-a-1;
		break;
	}
	for(p=p+1;p<a+n;p++)
		scanf("%d",p);
	do
	{
		i++;
		for(p=a;p<a+n;p++)
			scanf("%d",p);
	}
	while(a[a1]==0);
	b2=i-1;
	s=(a2-a1-1)*(b2-b1-1);
	for(j=1;j<=n*(n-1-i);j++)
		scanf("%d",&a[0]);
	printf("%d\n",s);
	return 0;
}