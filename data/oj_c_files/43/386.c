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
	int m,i,p,k;
	int judge(int af);
	cin>>m;
	for(i=3;i<=m/2;i+=2)
	{
		p=judge(i);
		k=judge(m-i);
		if(p!=1&&k!=1)
			cout<<i<<" "<<m-i<<endl;
	}
	return 0;
}


int judge(int af)
{
	int j;
	for(j=3;j<af;j+=2)
	{
		if(af%j==0)
		{
			return 1;
			break;
		}
	}
}
	








