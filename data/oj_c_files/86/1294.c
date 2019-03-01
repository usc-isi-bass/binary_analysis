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
	int n; cin>>n;
	int k;
	for (k=1;k<=n;k++)
	{
		int t,i;
		cin>>t;
		if (t==0) cout<<"60"<<endl;
		else
		{
			int time[t];
			for (i=0;i<t;i++)  cin>>time[i];
			for (i=0;i<t;i++)
				if (time[i]+3*(i+1)>=60)
				{
					if (time[i]+3*i<=60) cout<<time[i]<<endl;
					else cout<<60-3*i<<endl;
					break;
				}
			if (i==t) cout<<60-3*t<<endl;
		}
	}
	return 0;
}
