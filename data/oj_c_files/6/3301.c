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
    int c[101][101];
	int n,i,j,s,t;
	cin>>n;
	while(n--)
	{
		cin>>s>>t;
		for(i=0;i<s;i++)
			for(j=0;j<t;j++)
				cin>>c[i][j];
			int sum=0;
			if(s==1)
				for(i=0;i<t;i++)
					sum=sum+c[0][t];
			else if(t==1)
				for(i=0;i<s;i++)
					sum=sum+c[i][0];
			else
			{
				for(i=0;i<t;i++)
					sum=sum+c[0][i]+c[s-1][i];
				for(i=1;i<s-1;i++)
					sum=sum+c[i][0]+c[i][t-1];
			}
			cout<<sum<<endl;
	}
	return 0;
}