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
//*?????13   **
//*?????? 1200012837 **
//*???2012.11.12  **
//********************************

int main()
{
	int i, q = 0, r, len;
	char n[110];
	cin >> n;
	len = strlen(n);
	if(len > 1)
	{
		q = ((n[0] - '0') * 10 + (n[1] - '0')) / 13;
		r = ((n[0] - '0') * 10 + (n[1] - '0')) % 13;//???????????0
		if(q != 0 || len == 2)
			cout << q;
		for(i = 1;i < len - 1;i++)//??????i?<len-1?
		{
			q = (r * 10 + (n[i+1] - '0')) / 13;//??
			r = (r * 10 + (n[i+1] - '0')) % 13;//???

			cout << q;
		}
		cout << endl;
		cout << r << endl;
	}
	else
	{
		cout << '0' << endl;
		cout << n[0] << endl;
	}

	return 0;
}
