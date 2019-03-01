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
	int p, n, a, b, i, m, t, k; 
	cin >> p;
	for(n=6;n<=p;n=n+2)
	{
		for(i=2;i<=(n/2);i=i+1) 
		{	
			a = sqrt(i);
			for(t=3;t<=a;t=t+2) 
			{
				if(i%t==0) break; 
			}
			if(t>a)
			{
				m = n - i; 
				b = sqrt(m); 
				for(k=2;k<=b;k++) 
				{
					if(m%k==0) break; 
				}
				if(k==b+1) 
				{
					cout << n << "=" << i << "+" << m << endl; 
					break;
				}
			}	
		 }
	}
	return 0; 
} 
