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
	int n,i;
	float a[10000]={0},lin;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>lin>>a[i];
		a[i]=a[i]/lin;
	}
	for(i=1;i<n;i++)
	{
		if((a[i]-a[0])>0.04999999)
			cout<<"better"<<endl;
		else if((a[0]-a[i])>0.04999999)
			cout<<"worse"<<endl;
		else
			cout<<"same"<<endl;
	}
	return 0;
}