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
	int n;
	float m,max=0,min=1000000,sum=0,ave;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>m;
		sum+=m;
		if(max<m)
			max=m;
		if(min>m)
			min=m;
	}
	ave=sum/n;
	if(2*ave<max+min)
		cout<<max<<endl;
	else if(2*ave>max+min)
		cout<<min<<endl;
	else
		cout<<min<<","<<max<<endl;
	return 0;
}