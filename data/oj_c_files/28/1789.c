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
	char a[9000];
	int len,num=0,i,j,k,word=0;
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]==' ')
		{
			if(num!=0)
			{
			printf("%d",num);word++;
			num=0;
			break;
			}
		}
		else
		{
			num++;
		}
	}
	for(i=i+1;i<len;i++)
	{
		if(a[i]==' ')
		{
			if(num!=0)
			{
			printf(",%d",num);word++;
			num=0;
			}
		}
		else
		{
			num++;
		}
	}
	if(num!=0)
	{
		if(word==0)
			printf("%d",num);

			else
		printf(",%d",num);
	}

}