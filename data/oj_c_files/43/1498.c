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

int work(int n)
{
	for(int i=3;i<=sqrt(n);i+=2)
	if(n%i==0)return 0;
	return 1;
}
int main()
{
	int m,i;
	cin>>m;
	for(i=3;i<=m/2;i+=2)
	{
		if(work(i)&&work(m-i))
		cout<<i<<' '<<m-i<<endl;
	}
	return 0;
}
