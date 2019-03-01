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


int fab(int);

int main()
{
	int n,a,i;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a;
		cout << fab(a) << endl;
	}
	return 0;
}

int fab(int a)
{
	if(a==1)return 1;
	else if(a==2)return 1;
	else
		return fab(a-1)+fab(a-2);
}