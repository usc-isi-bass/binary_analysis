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
	double a[10000],b[10000];
	int i,n;
	cin>>n;
	cin>>a[0]>>b[0];
	for(i=1;i<n;i++)
	{
		cin>>a[i]>>b[i];
		if(100*(b[i]/a[i]-b[0]/a[0])>5)cout<<"better"<<'\n';
		else if(100*(b[0]/a[0]-b[i]/a[i])>5)cout<<"worse"<<'\n';
		else cout<<"same"<<'\n';
	}
	cout<<endl;
	return 0;
}
