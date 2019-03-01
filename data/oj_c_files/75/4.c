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
	int i,j,n,arrive[1000],leave[1000],time[2000]={0};
	cin>>n;
	for(i=0;i<n;i++) 
	{
		cin>>arrive[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>leave[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=arrive[i];j<leave[i];j++)
			time[j]++;
	}
	int max=0;
	for(i=0;i<2000;i++)
	{
		if(max<time[i]) max=time[i];
	}
	cout<<max<<endl;
	return 0;
}
