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
	int n=0,m=0,i=0,s=0;
	cin>>n>>m;
	while(n!=0)
	{
	for(i=2;i<=n;i++)
		{
           s=(s+m)%i;
	}cout<<s+1<<endl;
cin>>n>>m;
s=0;
}
}