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

//****************************************
//*???2013?10?11?                  *
//*??????                          *
//*????????????              *
//****************************************

int main ()

{
	int n, i;                                                            //??????n????i
	double a, b, c, x1, x2, x3, x;                                       //????a?b?c??x1?x2???x3???x
	cin >> n;                                                            //??????n
	for(i=1; i<=n; i++)                                                  //i?1???n
	{
		cin >> a >> b >> c;                                              //????a?b?c
		x1 = (-b + sqrt(b*b-4*a*c))/(2*a);                               //??x1
		x2 = (-b - sqrt(b*b-4*a*c))/(2*a);                               //??x2

		if( (b*b-4*a*c)>=0 )                                             //???????0
		{
			if(x1==x2)                                                   //???????
			{
				cout << fixed;                                           //???????
				cout << setprecision(5) << "x1=x2=" << x1 << endl;       //??5????x1?x2
			}		
			if(x1!=x2)                                                   //???????
			{
				cout << fixed;                                           //???????
				cout << setprecision(5) << "x1=" << x1 << ";" << "x2=" << x2 << endl; //??5????x1?x2
			}			
		}
		else                                                             //???????0
		{
			x3 = (+ sqrt(4*a*c-b*b))/(2*a);                              //????x3
			x = - b/(2*a);                                               //????
			if(x == -0)                                                  //?????-0
			{
				x = - x;                                                 //?????0
			}
			
			cout << fixed;                                               //???????
			cout << setprecision(5) << "x1=" << x << "+" << x3 << "i" << ";" << "x2=" << x << "-" << x3 << "i" << endl;
			//??5????x1?x2
		}
	}
	return 0;
}

			


	



