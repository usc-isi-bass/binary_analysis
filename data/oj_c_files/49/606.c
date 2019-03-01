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

/*
 * 90.cpp
 *
 *  Created on: 2011-12-25
 *  ???????
 */

int main()
{
	char x[501];
	cin.getline(x,501);
	int n,i,j,k,p;
	int begin,end;
	p=strlen(x);
	for(n=2;n<=500;n++)
	{
		for(i=0,j=n-1;j<p;i++,j++)
		{
			begin=i;
			end=j;
			while(begin<end)
			{
				if(x[begin]!=x[end]) break;
				else
				{
					begin=begin+1;
				    end=end-1;
				}
			}
			if(begin>end)
			{
				for(k=i;k<=j;k++)
				{
					cout<<x[k];
				}
				cout<<endl;
			}
		}
	}
	return 0;
}
