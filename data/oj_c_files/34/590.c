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

int a[100][100];
void change(int n)
{
	
	if (n==1)
	{
		cout<<"End"<<endl;
	}
	else
	{
		if (n%2==0)
		{
			cout<<n<<'/'<<2<<'='<<n/2<<endl;
			change(n/2);
		}
		else
		{
			cout<<n<<'*'<<3<<'+'<<1<<'='<<n*3+1<<endl;
			change(n*3+1);
		}
	}
}













int main()
{
	int n;
	cin>>n;
	change (n);

	



















	return 0;
}