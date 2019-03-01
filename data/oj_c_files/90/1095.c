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

int count(int x,int y)
{
	if(y==1||x==0)
		return 1;
	if(x<y)
		return count(x,x);
	return count(x,y-1)+count(x-y,y);
}

int main()
{
	int t,m,n,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>m>>n;
		cout<<count(m,n)<<endl;
	}
    cin.get();cin.get();
	return 0;
}