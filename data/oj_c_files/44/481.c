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

int reverse(int num);
int main()
{
	int num;        //????
	int i;
	for(i=0;i<6;i++)//????
	{
		cin>>num;
		cout<<reverse(num)<<endl;
	}
	return 0;
}
int reverse(int num)
{
	int change=0;   //change???????
	while(num!=0)
	{
		change=change*10+num%10;
		num/=10;
	}
	return change;
}