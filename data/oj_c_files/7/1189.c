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
//*???????   **
//*?????? 1200012837 **
//*???2012.12.25  **
//********************************

int main()
{
	char str[270], subs[70], rep[70], *p;
	cin >> str >> subs >> rep;
	p = strstr(str,subs);//???????
	if(p != NULL)
		for(int i = 0;rep[i] != '\0'; i++)
			*p++ = rep[i];
	cout << str << endl;
	return 0;
}
