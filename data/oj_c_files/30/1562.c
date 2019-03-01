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
	int n=0;
	cin>>n;
	int i=0,sum=0,a1=0,a2=0,a3=0;
	for(i=1;i<=n;i++)
	{
		a1=i%10;
		a2=i%7;
		a3=(i-a1)/10;
		if(a1!=7 && a2!=0 && a3!=7)
		{
			sum=sum+i*i;
		}
	}
    cout<<sum<<endl;
	return 0;

}