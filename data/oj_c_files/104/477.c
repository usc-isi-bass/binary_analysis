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

int answer(int a , int b)
{
	if(a==b)
	{
		return a;
	}
	else if(a>b)
	{
		return answer(a/2,b);
	}
	else
	{
		return answer(a,b/2);
	}
}
int main()
{
	int x,y;
	cin>>x>>y;
	cout<<answer(x,y)<<endl;
	return 0;
}