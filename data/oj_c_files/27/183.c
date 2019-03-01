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


int main ()
{
	int n ,j;
	cin >> n;
	double cha , x1,x2;
	float a[100], b[100], c[100];
	for(j = 0 ; j < n; j++)
	{
		cin >> a[j] >> b[j] >> c[j];
		cha =(double) b[j]* b[j] - 4 * a[j] * c[j];
		if(cha > 0)
		{
			x1 = (-b[j] + sqrt(cha))/(2*a[j]);
			x2 = (-b[j] - sqrt(cha))/(2*a[j]);
			cout <<fixed << setprecision(5)<< "x1="<< x1 << ";" <<"x2="<< x2 << endl;
		}
		else if (cha == 0)
			cout <<fixed << setprecision(5) <<"x1=x2="<<-b[j]/(2*a[j])<<endl;
		else
		{  double i = -b[j]/(2*a[j]);
			cout << fixed << setprecision(5) <<"x1="<<i<<"+"<<sqrt(-cha)/(2*a[j])<<"i"<<";"<<"x2="<<i<<"-"<<sqrt(-cha)/(2*a[j])<<"i"<<endl;
		}
	}
	return 0;
}

