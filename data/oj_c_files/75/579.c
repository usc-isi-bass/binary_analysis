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

//***********************************
//*???Oct 30, 2013 - ????? **
//*?????? 1300012719         **
//*???2013.10.31                **
//***********************************
int main()
{
	int n = 0, i, j, a = INT_MAX, b = INT_MIN, x[1000], y[1000], number[1000];
	char c;                                  //n?????????,i,j?????,a,b?????????,x[i],y[i]?????????,number[i]???????
	while (c != '\n')                        //????(??,??),?????????
	{
		cin >> x[n];                         //??x[n],???x[n]???a,?????n???????
		if (a > x[n])                        //?????x[1000]???x[0]?x[n-1]?n???
			a = x[n];
		n++;
		c = cin.get();
	}
	for (i = 0; i < n; i++)                  //????(??,??)n?y[i],???????b
	{
		cin >> y[i];
		if (b < y[i])
			b = y[i];
		c = cin.get();
	}
	for (i = a; i < b; i++)                  //?????????[a,b)??????????
	{
		number[i] = 0;                       //?????
		for (j = 0; j < n; j++)
		{
			if ((x[j] <= i) && (y[j] > i))   //?n????,??????????????,????????+1
				number[i]++;
		}
	}
	for (i = a + 1; i < b; i++)              //???????number[a]?number[b-1]???
	{                                        //??number[a]??????,?number[a]??????????number[a]
		if (number[a] < number[i])           //???number[a]????number[a]?number[b-1]?????
			number[a] = number[i];
	}
	cout << n << " " << number[a] << endl;   //???????????????
	return 0;
}