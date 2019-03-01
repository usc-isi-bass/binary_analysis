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
	const int rmb[6]={100,50,20,10,5,1};
	int n,i,ans[6];
	for (i=0;i<6;i++) ans[i]=0;
	cin>>n;
	for (i=0;i<6;i++)
	{
		while (n>=rmb[i])
		{
			ans[i]++;
			n=n-rmb[i];
		}
		cout<<ans[i]<<endl;
	}
	return 0;
}