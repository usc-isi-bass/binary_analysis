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
	int i=0,j=0,count=0;
	char a[10000][50]={'\0'};
	char c=getchar();
	while(c!='\n')
	{
		if(c==' ')
		{
			if(count!=0)
			{
				c=getchar();
				continue;
			}
			else if(count==0)
			{
				i++;
				j=0;
				count++;
			}
		}
		else
		{
			a[i][j++]=c;
			count=0;
		}
		c=getchar();
	}//??????????????????????????????????????????
	count=i;
	for(i=0;i<count;i++)
	{
		for(j=0;a[i][j]!='\0';j++)
		{
			cout<<a[i][j];
		}
		cout<<" ";
	}
	for(i=0;a[count][i]!='\0';i++)
		cout<<a[count][i];//??????????????????????
	return 0;
}