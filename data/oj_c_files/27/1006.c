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

//********************************
//*????????????   **
//*?????? 1300012855 **
//*???2013.10.11  **
//********************************


int main(void)
{
	int n; // n???????
	double a, b, c; // ???????
	double x1, x2; // ?????? 
	double delta, front, back; // delta?????front?-b/2a?back?sqrt(-delta)/2a
	cin >> n;
	for(int i = 1; i <= n; i++) // ??????i???n??n?????
	{
		cin >> a >> b >> c; // ?????? 
		delta = b * b - 4 * a * c; // ????? 
		if(delta < 0) // ???????????????????front?back??? 
		{
			front = -b / (2 * a); // ?? 
			if(front == 0) front = - front;// ??-0.00000?? 
			back = sqrt(-delta) / (2 * a); // ?? 
			cout << fixed << setprecision(5) << "x1=" << front << '+' << back << "i;";
			cout << fixed << setprecision(5) << "x2=" << front << '-' << back << 'i' << endl;
		} 
		else
		{
			if(delta == 0) // ?????0????????? 
			{
				x1 = -b / (2 * a); // ???????????? 
				cout << fixed << setprecision(5) << "x1=x2=" << x1 << endl;
			}
			else
			{
				x1 = (-b + sqrt(delta)) / (2 * a); // ????????????? 
				x2 = (-b - sqrt(delta)) / (2 * a);
				cout << fixed << setprecision(5) << "x1=" << x1 << ';' << "x2=" << x2 << endl; 
			}
			
		}
	} 
	return 0;
} 