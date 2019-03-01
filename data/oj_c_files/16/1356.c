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


int main()                //???????????
{
	char ch[10];
	int n=0;
	while (cin>>ch[n])
	{
		n++;
	}
	for (int i=n-1;i>=0;i--)
		cout<<ch[i];
	return 0;
}