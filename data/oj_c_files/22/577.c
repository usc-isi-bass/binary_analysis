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
	int a[300],num,i=0,j,max,t,flag=0;
	char c;
	do
	{
		scanf("%d",&a[i]);
		i++;
	}while((c=getchar())!='\n');
	num=i;
	if(num==1)printf("No\n");
	else
	{
		for(i=0;i<num;i++)
		for(j=i;j<num;j++)
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
	max=a[0];
	for(i=1;i<num;i++)
		if(a[i]!=max)
		{
			flag++;
			break;
		}
	if(flag!=0)
		printf("%d\n",a[i]);
	else printf("No\n");
	}
	return 0;
}