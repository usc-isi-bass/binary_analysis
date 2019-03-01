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
	int n;//????????
	cin >>n;//????
	if (n >= 10000 ) cout <<"00001"<<endl;//???????????
	else if (n >= 1000)  cout << n%10 <<(n-n%10)/10%10 << (n-n%100)/100%10 << (n-n%1000)/1000%10 <<endl;
	     else if (n >= 100)  cout << n%10 <<(n-n%10)/10%10 << (n-n%100)/100%10 <<endl;
		       else if (n >= 10) cout << n%10 <<(n-n%10)/10%10 <<endl;
			        else cout << n <<endl;
	return 0;
}

