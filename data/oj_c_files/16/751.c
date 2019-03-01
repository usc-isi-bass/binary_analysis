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

//********************
//??????
int main()
{
	int n,i=0,a[6];
	cin>>n;
	if(n==0)
		cout<<n;
	else 
		while(n>0)
	{
	     a[i]=n%10;
		 n=(n-a[i])/10;
		 cout<<a[i];
		 i++;
	}
	 return 0;

}