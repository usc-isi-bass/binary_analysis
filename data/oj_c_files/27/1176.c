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

//****************************
//**Title:?????????**
//**Author:???1300017687 **
//**Date?2013.10.9         **
//**File?6.cpp              **
//****************************

int main()
{
	int n;							//??n???????

	cin >> n;						//??n

	for ( int i = 1;i <= n; i++)	//??i?1?n???
	{								//????
		double a,b,c;				//?????????a,b,c

		cin >> a >> b >> c;			//??a,b,c

		double delta = b * b - 4 * a * c;//?????delta
		double line = - b / (2*a);			//?????????line?-b/(2*a)
		cout << fixed << setprecision(5);	//?????cout???????5?

		if ( line == -0 )			//??line?-0
			line = 0;				//??????0			*****?????????0?????*****

		if ( delta == 0 )			//??delta?0
			cout << "x1=x2=" << line << endl;		//??x1=x2=line
		else if (delta > 0)			//?????delta > 0
			cout << "x1=" << line + sqrt(delta)/(2*a)	//????x1?x2
			     << ";x2="<< line - sqrt(delta)/(2*a)
				 << endl;	
		else 			//??
			cout << "x1=" << line << "+"		//????????x1?x2
			     << (sqrt(-delta))/(2*a)<< "i;"
				 << "x2=" << line << "-"
				 << (sqrt(-delta))/(2*a)<< "i"
				 << endl;
	}
	cin.get();
	cin.get();
	return 0;
}