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
	int i=0,j,x[1001],y[1001],count[1001];
	for(int t=0;t<1001;t++)  count[t]=0;
	char a;
	while(1)
	{
		cin>>x[i];
		if(cin.get()!=',')
			break;
		i++;
	}
	for(j=0;j<i;j++)
		cin>>y[j]>>a;
	cin>>y[i];
	for(j=0;j<=i;j++)
		for(int k=x[j];k<y[j];k++)
			count[k]++;
		int max=0;
    for(j=0;j<1001;j++)
	{
		if(count[j]>max)
			max=count[j];
	}
     cout<<i+1<<" "<<max<<endl;
	 return 0;
}