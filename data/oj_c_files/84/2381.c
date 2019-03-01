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
	int num,len;
	int max1=0,max2=0;
	int tmp,i;
	scanf("%d",&len);
	for (i = 1;i<=len;i++)
	{
		scanf("%d",&num);
		if(num>max1)
		{
			tmp=num;
			num=max1;
			max1=tmp;
			if (num>max2)
			{
				tmp=num;
				num=max2;
				max2=tmp;
			}
		}
		if(max1>num&&num>max2)
		{
			tmp=num;
			num=max2;
			max2=tmp;
		}
		
	}
	printf("%d\n%d\n",max1,max2);
	return 0;
}