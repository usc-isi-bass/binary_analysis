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
	int n,i=0,x,m=0,k=0,t=0;
	cin>>n;
	int shuzu[n];
	for(i=0;i<n;i++)
	{
		cin>>x;
		shuzu[i]=x;
	}
	for(m=0;m<n;m++)
	{
		if(m==0){cout<<shuzu[m];}
		else
		{
			for(k=0;k<m;k++)
			{
				if (shuzu[m]!=shuzu[k]) t=1;
				else {t=0;break;}
			}
			if(t==1) cout<<" "<<shuzu[m];

		}

	}


	return 0;
}

