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
	char a[81];
	int n, i, j;
	cin >> n;
	cin.get();
	for(i = 0;i < n;i++)
	{
		cin.getline(a, 81);
		if((a[0] >= 'A' && a[0] <= 'Z') || (a[0] >= 'a' && a[0] <= 'z') || a[0] == '_')
		{
			for(j = 0;a[j] != '\0';j++)
			{
				if((a[j] >= '0' && a[j] <= '9') || (a[j] >= 'A' && a[j] <= 'Z') || (a[j] >= 'a' && a[j] <= 'z') || a[j] == '_')
				{}
				else
				{
					break;
				}
			}
			if(a[j] == '\0')
			{
				cout << "1" << endl;
			}
			else
			{
				cout << "0" << endl;
			}
		}
		else
		{
			cout << "0" << endl;
		}
	}
	return 0;
}