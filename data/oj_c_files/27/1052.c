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
	int n;
	double a, b, c;
	double delta, x1, x2, real_figure, unreliable_figure; //??????delta????real_figure?????unreliable_figure?? 
	cin >> n; //??????? 
	
	for(int i = 1; i <= n; i++) //??n?????????? 
	{
		cin >> a >> b >> c;
		delta = b * b - 4 * a * c; //??delta 
		
		if(delta >= 0) //??delta???????????????????? 
		{
			x1 = (-b + sqrt(delta))/(2 * a);
			x2 = (-b - sqrt(delta))/(2 * a); //?????x1?x2 
			
			if(x1 == x2) //????????????????? 
				cout << fixed << setprecision(5) << "x1=x2=" << x2 << endl;
			else //???????????????? 
				cout << fixed << setprecision(5) << "x1=" << x1 << ";x2=" << x2 << endl;
		}
		else //delta?????????????? 
		{
			real_figure = b / (2 * a);
			if(real_figure != 0)
				real_figure = -real_figure;
			unreliable_figure = sqrt(-delta) / (2 * a);
			cout << fixed << setprecision(5);
			//???????????????? 
			cout << "x1=" << real_figure << "+" << unreliable_figure << "i;x2=" << real_figure << "-" << unreliable_figure << "i" << endl;
		}
	}
	return 0;
}