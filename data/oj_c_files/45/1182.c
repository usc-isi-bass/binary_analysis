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
	char a[50],b[50];
	int i,j,flag;
	scanf("%s %s",&a,&b);
	for(i=0;b[i]!=0;i++)
	{
		if (b[i]==a[0])
		{
			flag=0;
			for(j=0;a[j]!=0&&b[j]!=0;j++)
			{
				if (a[j]!=b[i+j])
				{
					flag=1;
					break;
				}
			}
			if(!flag) 
			{
				printf("%d\n",i);
				break;
			}
		}
	}
	return 0;
}