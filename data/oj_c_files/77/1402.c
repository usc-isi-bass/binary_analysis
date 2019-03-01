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


int couple(int);
char a[100];
int len, b[100] = {0};

int main()
{
	cin >> a;
	len = strlen(a);
	couple(0);
	return 0;
}

int couple(int i)
{
	int j;
	for(int k = i; k < len; k++)
	{
		while(b[i] == 1)
		{
			i++;
		}
		if(a[i] == a[0])
		{
			b[i] = 1;
			j = couple(i+1);
			cout << i << " " << j << endl;
		}
		else
		{
			b[i] = 1;
			return i;
		}
	}	
}
	