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
	int a[5][5],i,j,flag[5],max,maxj;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>*(*(a+i)+j);  
		}
	}
	for(i=0;i<5;i++)
	{
		max=*(*(a+i)+0);
		maxj=0;
		for(j=1;j<5;j++)
		{
			if(*(*(a+i)+j)>max)
			{
				max=*(*(a+i)+j);
				maxj=j;
			}
		}
		if(*(*(a+0)+maxj)>=max&&*(*(a+1)+maxj)>=max&&*(*(a+2)+maxj)>=max&&*(*(a+3)+maxj)>=max&&*(*(a+4)+maxj)>=max)
		{
			cout<<i+1<<' '<<maxj+1<<' '<<max<<endl;
		}
		else
		{
			*(flag+i)=0;
		}
	}
	if(*(flag+0)==0&&*(flag+1)==0&&*(flag+2)==0&&*(flag+3)==0&&*(flag+4)==0)
	{
		cout<<"not found"<<endl;
	}
	return 0;
}

