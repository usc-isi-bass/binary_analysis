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
	char str[10][100000],min;
	int t,i,j,k,sign=0,num[26],time[26],temp;
	cin>>t;
	for (i=0;i<t;i++)
	{
		sign=0;
		cin>>str[i];
		for(k=0;k<26;k++)
		{
			num[k]=0;
			time[k]=0;
		}
		for(j=0;;j++)
		{
			if(str[i][j]=='\0')
				break;
			for(k=0;k<26;k++)
			{
				if(str[i][j]==97+k)
				{
					num[k]++;
					time[k]=j;
				}
			}
			
		}
		for(k=0;k<26;k++)
		{
			if(num[k]==1)
			{
				temp=time[k];
				sign=1;
				break;
			}
			
		}
		if(sign==0)
			cout<<"no"<<endl;
		else
		{
			for(k=0;k<26;k++)
			{
				if(num[k]==1)
				{
					if(time[k]<=temp)
					{
						temp=time[k];
						min=97+k;
					}
				}
			}
			cout<<min<<endl;
		}
		
	}
	return 0;
}