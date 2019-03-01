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


int reverse(int num); 

int main()
{
	int n;

	cin >> n;
	cout << reverse(n) << endl;
return 0;
}

int reverse(int num)
{
	int e;
	int n,k;
	int i;
	int s,t;
	int f;
	t=(int)fabs(num);
	if(num<0)
	{
		s=-num;
		f=-1;
	}
	else
	{
	s=num;
	f=1;
	}
	e=(int)log10(t)+1;
	for(i=1;i<e/2+1;i++)
	{
		n=(t%(int)pow(10,i))/(int)pow(10,i-1);
		k=t/((int)pow(10,e-i))-10*(t/((int)pow(10,e-i+1)));
		s-=n*(int)pow(10,i-1);
		s-=k*(int)pow(10,e-i);
		s+=n*(int)pow(10,e-i);
		s+=k*(int)pow(10,i-1);
	}
	return f*s;
}
