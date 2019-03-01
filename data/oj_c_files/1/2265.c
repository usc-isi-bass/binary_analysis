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

int ys(int af,int bf)
{
	int s;
	if(af<bf)
	s=0;
	if(af==bf)
	s=1;
	if(af>bf)
	{
		s=1;
		for(int i=af/2;i>=bf;i--)
		{
			if(af%i == 0)
			{
			s+=ys(af/i,i);
			}
		}
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	int p;
	while(cin>>p)
	{
		cout << ys(p,2) << endl;
	} 
	return 0;
}
