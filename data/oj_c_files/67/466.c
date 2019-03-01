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
	double n,a,b,c,d,p1,p2;
	cin >> n;
	cin >> a >> b;
	p1=(double)b/(double)a;
	for (int i=2;i<=n;i++)
	{
		cin >> c >> d;
		p2=(double)d/(double)c;
		if ((p1-p2)>0.05)
			cout << "worse" << endl;
		else 
		{
			if ((p2-p1)>0.05)
			cout << "better" << endl;
			if (((p2-p1)<0.05)&&((p2-p1)>(-0.05))) 
				cout << "same" << endl;
		}
	}
	return 0;
}