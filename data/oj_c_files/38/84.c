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
    int k,i;
	cin>>k;
	for(i=0;i<k;i++)
	{
		int n,j;
		cin>>n;
		double a[110],aver,s=0.0,x=0.0;
		for(j=0;j<n;j++)
		{
			cin>>*(a+j);
            x=x+*(a+j);
		}
		aver=x/n;
	//	cout<<aver<<endl;

		for(j=0;j<n;j++)
			s=s+(*(a+j)-aver)*(*(a+j)-aver);
		s=sqrt(s/n);
        printf("%.5lf\n",s);
			cout<<endl;
	}
	return 0;
}


