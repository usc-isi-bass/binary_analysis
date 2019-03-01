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

char c[100];
int match(int x)
{
	
	int q;
	if(c[x]==c[0])
	{
		q=match(x+1);
		cout<<x<<' '<<q<<endl;
		return match(q+1);
	}
	else
		return x;
}
int main()
{
	
	cin.getline(c,100);
	match(0);
	return 0;
}
