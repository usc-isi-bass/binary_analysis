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
	int n,a,b,num=6;
	cin>>n;
	while(num<=n)
	{
		for(int a=3;a<=n/2;a+=2)
		{  
			int countera=0;
		     double a0;
			a0=sqrt(a);
			for(int i=3;i<=a0;i+=2)
			{
				if(a%i==0) countera++;
			}
			if(countera!=0) continue;
				b=num-a;
			int counterb=0;
			double b0;
				b0=sqrt(b);
			for(int j=3;j<=b0;j+=2)
			{
				if(b%j==0)  counterb++;
			}
			if(counterb!=0) continue;
			else {
				cout<<num<<"="<<a<<"+"<<b<<endl;
			break;
			}
		}
		num+=2;
	}
	return 0;
}