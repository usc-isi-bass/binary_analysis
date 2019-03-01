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
	int A,B,a[5],i=0,j=0;
	cin>>A;
	do
	 {
			B=A/10;
	        a[i]=A-B*10;
			A=B;
			i++;
			j++;
	}
	 while(A!=0);
	for(i=0;i<j;i++)
		cout<<a[i];
	return 0;
}

