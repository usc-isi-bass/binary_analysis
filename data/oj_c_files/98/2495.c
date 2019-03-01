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
	int n,i,j,k,l[1000],sum;
	char a[1000][50];
	cin>>n;
	cin.get();
	for(i=1;i<=n;i++)
	{
		cin>>*(a+i);
	}
	for(i=1;i<=n;i++)
	{
		l[i]=strlen(*(a+i));
	}
	for(i=1;i<=n;i++)
	{
		sum=0;
		for(j=i;j<=n;j++)
		{
			if(sum+l[j]>80)
			{
				break;
			}
			else
			{
			  sum+=l[j]+1;
			}
		}
		if(i==n)
		{
			cout<<*(a+n)<<endl;
		}
		else
		{
          for(k=i;k<j-1;k++)
		 {
			cout<<*(a+k)<<' ';
		  }
		  cout<<*(a+j-1)<<endl;
		}
		i=j-1;
	}
	return 0;
}

 