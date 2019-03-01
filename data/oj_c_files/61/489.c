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


int n;
int num[maxx];

int com(int x)
{
	if(x ==1 || x ==2)
	{
		return 1;
	}
	return com(x-1) + com(x-2);
}
int main()
{
	int temp;
	while(cin >> n)
	{
		while(n--)
		{
			cin >> temp;
			cout << com(temp) <<endl;
		}
	}
	return 0;
}