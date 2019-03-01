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

void fun(int m, int i);                                                  //????
int num ;
int main()
{
	int n, i, a;
	cin>>n;
	for(i = 0; i < n; i++)
	{
		cin>>a;
		num = 0;
		fun(a, 2);                                                      //????
		cout<<num + 1<<endl;                                            //???????a=a???????num??1
	}
	return 0;
}
void fun(int m, int i)
{
	int k = sqrt(m);
	for(i = i; i <= k; i++)
	{
		if(m % i == 0)
		{
		         num++;                           
			fun(m / i, i);                                             //?????????
		}
	}
}