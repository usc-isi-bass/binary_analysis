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
	char shuru[500];
	cin.getline(shuru,500);
	int a = 0, i = 0;
	a = strlen(shuru);
	if(shuru[0] >= '0' && shuru[0] <= '9')
		cout << shuru[0];
	for(i = 0; i <= a - 1; i++)
	{
		if(i != 0)
		{
			if(shuru[i] >= '0' && shuru[i] <= '9')
				cout << shuru[i];
			if((shuru[i] < '0' || shuru[i] > '9') && (shuru[i - 1] >= '0' && shuru[i - 1] <= '9'))
				cout << endl;
		}
    }
	cout << endl;
	return 0;
}
