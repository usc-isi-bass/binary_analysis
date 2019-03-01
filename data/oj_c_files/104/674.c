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

void gaoxiao(int m,int n)
{
	if(m>n)
		m=m/2;
	if(m<n)
		n=n/2;
	if(m==n)
		cout<<m<<endl;
	else
		gaoxiao(m,n);
}
int main()
{
	int m,n;
	cin>>m>>n;
	gaoxiao(m,n);
	char mm;
	cin>>mm;
	return 0;
}

