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
	int i , n;
	cin >> n;
	cin.get();
	for(i = 1; i <= n; i++)
	{
		char str[81];
		int j, len;
		cin.getline(str,81);
		len = strlen(str);
		if(str[0] == '_' || (str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z'))
		{
			for(j = 1; j < len; j++)
			{
				if((str[j] == '_') || (str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= '0' && str[j] <= '9'))
					continue;
				else
					break;
			}
			if(j == len)
				cout << 1 <<endl;
			else
				cout << 0 << endl;
			
		}
		else
			cout << 0 << endl;
	}

	return 0;
}
