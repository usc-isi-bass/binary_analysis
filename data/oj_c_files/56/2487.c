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
	int k,a1,a2,a3,a4,a5;//k?????????a1??????a2??????a3??????a4??????a5?????
	cin >> k;
	if (k>10000)
	{
		a1=k/10000;
	    a2=(k-a1*10000)/1000;
	    a3=(k-a1*10000-a2*1000)/100;
	    a4=(k-a1*10000-a2*1000-a3*100)/10;
	    a5=k-a1*10000-a2*1000-a3*100-a4*10;
		cout << a5*10000+a4*1000+a3*100+a2*10+a1 << endl;
	}
	else if (k>1000)
	{
		a2=k/1000;
		a3=(k-a2*1000)/100;
		a4=(k-a2*1000-a3*100)/10;
		a5=k-a2*1000-a3*100-a4*10;
		cout << a5*1000+a4*100+a3*10+a2 << endl;
	}
	else if (k>100)
	{
		a3=k/100;
		a4=(k-a3*100)/10;
		a5=k-a3*100-a4*10;
		cout << a5*100+a4*10+a3 << endl;
	}
	else if (k>10)
	{
		a4=k/10;
		a5=k-a4*10;
		cout << a5*10+a4 << endl;
	}
	return 0;
}