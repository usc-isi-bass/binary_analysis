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
	int x[20],r,ctr,t,i,j;
	while(cin.peek()!='-')
	{
		r=ctr=0;
		while(cin>>t,t)
			x[++r]=t;
		cin.get();
		for(i=1;i<=r;i++)
		{
			for(j=1;j<=r;j++)
			{
				if(x[i]==(x[j]<<1))
					ctr++;
			}
		}
		cout<<ctr<<endl;
	}
	return 0;
}