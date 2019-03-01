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
	int len,e;
	scanf("%d",&len);
	int num[100];
	scanf("%d\n",&num[0]);
	for(int k=1;k<=2;k++)
	{
		for(int i=0;i<len-k;i++)
		{
			scanf("%d",&num[i+1]);
			if(num[i]>num[i+1])
			{
				e=num[i+1];
				num[i+1]=num[i];
				num[i]=e;
			}
		}
	}
	printf("%d\n%d\n",num[len-1],num[len-2]);
	return 0; 
}