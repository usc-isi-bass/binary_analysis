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


int min(int a, int b)
{
	if (a<b) return a;
	else return b;
}

int main()
{
	int n,m,s,t;
	cin>>n;
	for (int i=1; i<=n; ++i)
	{
		cin>>m;
		s=60;
		for (int j=1; j<=m; ++j)
		{
			cin>>t;
			t+=j+j+j-3;
			if (t<=60) s-=min(3,60-t);
		}
		cout<<s<<endl;
	} 
	return 0;
}