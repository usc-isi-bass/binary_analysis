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
	char a[100];
	int n;
	cin >> n;
	cin.get();
	for(int i=0; i < n; i++)
	{
		cin.getline(a,100);
		int l;
		l = strlen(a);
		int t = (int)a[0];
		if((t <= 90 && t >= 65) || (t <= 122 && t >= 97) || t == 95)
		{
			int j;
			for(j=1; j < l; j++)
			{
				if((a[j] > 90 || a[j] < 65)  && (a[j] > 122 || a[j] < 97) && a[j] != 95 && (a[j] < 48 || a[j] > 57))
				{
					cout<<0<<endl;
					break;
				}
				else
				{
					continue;
				}
			}
			if(j == l)
			{
				cout << 1 <<endl;
			}

		} 
		else
		{
			cout<<0<<endl;
		}
	}
return 0;
}