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
	int p[10001]={0},q[10001]={0};
	int n,a,b,i;
	cin>>n;
	for(i=0;;i++)
	{
		cin>>a>>b;
		if(a==0 && b==0) break;
		p[b]++;
		q[a]=1;
	}
	for(i=0;i<n;i++)
	{
		if(p[i]==n-1 && q[i]==0)
		{
			cout<<i<<endl;
			break;
		}
	}
	if(i==n) cout<<"NOT FOUND"<<endl;
return 0;
}