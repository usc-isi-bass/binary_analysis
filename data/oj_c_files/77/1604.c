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
	char str[100],boy,girl;
	int len,a[100],i=0,j=0;
	cin.getline(str,100);
	len=strlen(str);
	boy=str[0];
	for(i=0;i<len;i++)
	{
		if(str[i]!=boy)
		{
			girl=str[i];
			break;
		}
	}
	for(i=0;i<len;i++)
	{
		if(str[i]==boy)
			a[i]=1;
		if(str[i]==girl)
			a[i]=-1;
	}
	for(i=0;i<len;i++)
	{
		if(str[i]==girl)
		{
			for(j=i-1;j>=0;j--)
			{
				if(a[j]==1)
				{
					cout<<j<<" "<<i<<endl;
					a[j]=0;
					a[i]=0;
					break;
				}
				if(a[j]==-1)
					break;
			}
		}
	}
	return 0;
}