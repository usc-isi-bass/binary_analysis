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
	int num;
	char n;
	cin>>num;
	if(num%3==0&&num%5==0&&num%7==0)
		cout<<3<<" "<<5<<" "<<7<<endl;
	else if(num%3==0&&num%5==0)
		cout<<3<<" "<<5<<endl;
	else if(num%3==0&&num%7==0)
		cout<<3<<" "<<7<<endl;
	else if(num%5==0&&num%7==0)
		cout<<5<<" "<<7<<endl;
	else if(num%3==0)
		cout<<3<<endl;
	else if(num%5==0)
		cout<<5<<endl;
	else if(num%7==0)
		cout<<7<<endl;
	else
		cout<<"n"<<endl;
	return 0;
	cin.get();
}