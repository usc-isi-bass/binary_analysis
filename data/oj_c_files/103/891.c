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
	char m[1010], t;
	int c = 1;
	cin >> m;
	t = m[0];
	for(int i = 1; i < strlen(m); i++)
	{
		if(m[i] == t || m[i] - 32 == t || m[i]+32 == t)
		{
			c++;
		}
		else
		{
			if(t >= 'A' && t <= 'Z')
				cout << "(" << (char)t <<","<<c<<")";
			else
				cout << "(" << (char)(t-32) <<","<<c<<")";
			c = 1;
			t = m[i];
		}
	}
	if(t >= 'A' && t <= 'Z')
		cout << "(" << (char)t <<","<<c<<")"<<endl;
	else
		cout << "(" << (char)(t-32) <<","<<c<<")"<<endl;
	return 0;
}
