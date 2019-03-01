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

/*??????
 *?????function2-1.cpp
 *Created on: 2012-11-25
 *???????
 */
void f(int);
int a,b,i,j;//????

int main (){
	cin >> a;//????
	f(a);
	return 0;//????
}

void f(int x)
{
	if (x==1)//x=1???
		{cout << "End" << endl;return;}
	if (x%2==1)
	{cout << x <<"*3+1=" <<3*x+1 << endl;return f(3*x+1);}//x??????
	if (x%2==0)
	{cout << x <<"/2=" << x/2 << endl;return f(x/2);}//x??????
	}
