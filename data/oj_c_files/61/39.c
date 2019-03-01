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
	int n=0,a=0,i=0,j=0;
	int f[30];
	for(i=0;i<30;i++)
		f[i]=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		f[1]=1;
		f[2]=1;
		cin>>a;
		if(a==1||a==2)
			cout<<1<<endl;
		else
		{
			for(j=3;j<=a;j++)
				f[j]=f[j-1]+f[j-2];
			cout<<f[a]<<endl;
		}
	}
	return 0;
}