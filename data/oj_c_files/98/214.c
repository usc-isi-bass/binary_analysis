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
	int i,n,temp=0;
	scanf("%d",&n);
	char a[10000][41],(*p)[41]=a;
	for(i=0;i<n;i++) scanf("%s",*(p+i));
	for(i=0;i<n;i++)
	{
		if(temp+strlen(*(p+i))<=80)
		{
			if(temp==0)
			{
			printf("%s",*(p+i));
			temp+=strlen(*(p+i))+1;
			}
			else
			{
				printf(" %s",*(p+i));
				temp+=strlen(*(p+i))+1;
			}
		}
		else
		{
			printf("\n");
			temp=0;
			i--;
		}
	}
	return 0;
}
