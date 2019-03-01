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
	int a,p=0;
	int n[300],m[300];
	
	do
	{
		cin>>n[p]>>m[p];
		p++;
	}while(n[p-1]!=0&&m[p-1]!=0);
	for(int q=0;q<p-1;q++)
		{
			a=0;
			for(int i=2;i<=(n[q]);i++)
				a=(a+m[q])%i;
			cout<<a+1<<endl;
	}
	return 0;
}
