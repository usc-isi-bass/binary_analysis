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
	int n[100][15],i=0,j,k,count,t;
	for(i=0;;i++)
	{
		count=0;
		j=0;
		do
		{
			cin>>n[i][j];
			if(n[i][j]==-1)
				goto loop;
			j++;
		}
		while(n[i][j-1]!=0);
		for(k=0;k<j;k++)
		{
			for(t=j-1;t>k;t--)
			{
				if(n[i][t]==2*n[i][k] || 2*n[i][t]==n[i][k] )
					count++;
			}
		}
		cout<<count<<endl;
	}
loop:return 0;
}

	

