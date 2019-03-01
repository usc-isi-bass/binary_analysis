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
	char a[3000];
	int num[300]={0};
	int i, l=0, k=0;
	gets(a);
	for(i=0;;i++)
	{
		if(a[i]=='\0') 
		{
			num[k]=l;
			break;
		}
		if(a[i]==' ') 
		{
			num[k]=l;
			l=0;
            k++;
			for(i++;;i++)
			{
				if(a[i]!=' ') 
				{
					i--;
					break;
				}
			}
		}
		else
		{
			l++;
		}
	}

	for(i=0;i<k;i++)
	{
		printf("%d,", num[i]);
	}
	printf("%d",num[k]);
	return 0;
}