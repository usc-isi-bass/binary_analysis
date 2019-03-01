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
	char str[600];
	cin>>str;
	int i,j,k,l;
	int n=strlen(str);
	for(i=2;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			int flag=1;
			for(k=j,l=k+i-1;k<=(j+(i-1)/2);k++,l--)
			{
				if(str[k]!=str[l])
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			{
				for(k=j;k<j+i;k++)
				{
					cout<<str[k];
				}
				cout<<endl;
			}
		}
	}
	return 0;
}