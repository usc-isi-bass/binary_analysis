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

/*
???:????????
???:??
????:2011.9.16
*/
int main()                                                            //???
{                                                                     //?????
	int n,num;                                                        
	double a,b,c,d,e,f;
	cin >> num;                                                       //??????
	for(n=0; n<num; n++) 
	{                                                                 //????
		cin >> a >> b >> c ;                                          //??????
		d = b * b - 4 * a * c;                                        //?????
		e = ( 0 - b )/( 2 * a );
		cout << fixed << setprecision(5);                             //??????????????5?
		if(d==0)                                                      //??????0???????
			cout << "x1=x2=" << e << endl;
	    else                                                          //???????0????????
		{
			if(d>0)                                                   //??????0????????
			{
				f = sqrt ( d )/( 2 * a );
				cout << "x1=" << e + f << ";" << "x2=" << e - f << endl;
			}
			else                                                      //??????0????????
			{
					f = sqrt ( -d )/( 2 * a );
					cout << "x1=" << e << "+" << f << "i" << ";" << "x2=" << e << "-" << f << "i" << endl;
			}
		}
	}
	    return 0;
}                                                                      //?????