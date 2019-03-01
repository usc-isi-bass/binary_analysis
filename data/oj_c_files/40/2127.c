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

const double PI = 3.1415926; 

int main() 
{
	double a , b, c , d, e; 
	cin >> a >> b >> c >> d >> e; 
	double s = 0; 
	double t = (a+b+c+d) / 2; 
	s  = sqrt(
			(t-a) * (t-b) * (t-c) * (t-d) - 
			a * b * c * d *
			pow(cos(e * PI / 360),2)
		 ); 
	if (s >=0) printf("%.4lf",s); 
		else printf("Invalid input");
	return 0; 
}