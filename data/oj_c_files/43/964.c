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

//******************************
//*??:???   1200062705    *
//*???:  1 ??????     *
//*?? 2012-12-26             *
//******************************
int main()
{

int m, a = 3, b, c, n;
cin >> m;
for (a = 3; a <= m / 2; a = a + 2)
{
	n = (int)sqrt(a);
    for (b = 2; b <= n; b++)
	{
        if (a % b == 0) break;
  	}
    if (b == n + 1)
	{
		c = m - a;
	  	n = (int)sqrt(c);
		for(b = 2; b <= n; b++)
       {
	       if (c % b == 0) break;
	   }
	   if (b == n + 1)   cout << a << " " << c << endl;
	}
}

return 0;
}
