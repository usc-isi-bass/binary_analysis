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


int main() {
	double derta,a,b,c;
	int n,i;
	cin >> n;
	for (i=0;i<n;i++)
	{
		cin >> a >> b >> c;
		derta=b*b-4*a*c;
		cout.precision(5);
		cout << fixed;
		if (derta==0)
			cout << "x1=x2=" <<b/(-2*a)<<endl;
		else if (derta>0)
			    cout << "x1=" << (-b+sqrt(derta))/(2*a) << ';' << "x2=" << (-b-sqrt(derta))/(2*a)<<endl;
		     else if (b==0) cout << "x1=" <<b<<'+'<<sqrt(-derta)/(2*a)<<'i'<<';'<< "x2="<<b<<'-'<<sqrt(-derta)/(2*a)<<'i'<<endl;
		          else cout << "x1=" <<-b/(2*a)<<'+'<<sqrt(-derta)/(2*a)<<'i'<<';'<< "x2="<<-b/(2*a)<<'-'<<sqrt(-derta)/(2*a)<<'i'<<endl;
	}
	return 0;
}