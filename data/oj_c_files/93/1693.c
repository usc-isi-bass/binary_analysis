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
	int x;
	cin >> x;
	if (x % 3 == 0)  
	{   
		cout << 3;
		if (x % 5 == 0) cout << " " << 5;
		if (x % 7 == 0) cout << " " << 7;
	}
	else if (x % 5 == 0) 
    {
  	    cout << 5 ;
        if (x % 7 == 0) cout << " " << 7;
	}
		else if (x % 7 == 0) cout << 7 ;	 
	else cout << "n";
    return 0;
}