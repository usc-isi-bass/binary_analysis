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
	int n,x[10000],y[10000],i=1,j,k,people[1001]={0},mp=0;
	char t;
	cin>>x[0];
	cin.get(t);
	while(t!='\n')
	{
		cin>>x[i++];
		cin.get(t);
	}
	for(j=0;j<i;j++)
	{
		cin>>y[j];
		cin.get(t);
	}
	for(j=0;j<1000;j++)
	{
		for(k=0;k<=i;k++)
		{
			if(j>=x[k]&&j<y[k])
				people[j]++;
		}
		if(people[j]>mp)
			mp=people[j];
	}
	cout<<i<<' '<<mp;
	return 0;
}