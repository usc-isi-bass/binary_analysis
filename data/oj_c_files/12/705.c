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
	int number[16]={0};
	int m,i=1;
	while(m!=-1)
	{
		do
		{
			cin>>m;
			number[i]=m;
			i++;
		}while(m!=0&&m!=-1);
		int k=1,t,j=0;
		for(k=1;k<=i-1;k++)
		{
			t=number[k];
			int p;
			for(p=1;p<=i-1;p++)
			{
				if(t==2*number[p])
				{
					j++;
				}
				else continue;
			}
		}
	if(m!=-1)
	{
		cout<<j-1<<endl;
	}
	else break;
	i=1;
	j=0;
	}
	return 0;
}