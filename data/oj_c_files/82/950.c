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
	int n,i,j,a,b,p,q; //????n????i?j???a???b???????p???????q
	cin >> n; //????
//	p = 0; //p??????0
	q = 0; //q??????0
	j = 0; //j??????0
	for (i = 1;i <= n;i++) //??n?
	{
		cin >> a >> b; //??a?b
		if (a >= 90 && a <= 140 && b >= 60 && b <= 90) //??????
		{
			j = j+1; //???+1
		}
		else
		{
			j = 0;
		}
//		p = j;
			if (j > q)
			{
				q=j;
			}		
	}
	cout << q << endl;
	cin.get();
    cin.get(); //????
	return 0;
}