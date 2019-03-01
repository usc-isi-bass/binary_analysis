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
	int n, i , k, te, a[100], yu=0, io=0;
	cin >> n;
	memset(a, 0 , sizeof(a));
	a[0] = 1;
	if(n==0)
		cout << a[0] << endl;
	else 
	{
		for(i = 1; i <= n; i++)
          for(k = 0; k < 100; k++)
		  {
			  io = yu;                   //io?????, yu????
			  te = a[k] * 2;
			  if(te > 9)
			  {
				  yu = 1;
				  a[k] = te - 10 + io;
			  }
			  else
			  {
			      a[k] = te + io;
			      yu = 0;
			  }
		  }
	  for(k = 99; a[k] == 0; k--);
	  for(i = k; i >= 0; i--)
		cout << a[i] ;
	}
	return 0;
}