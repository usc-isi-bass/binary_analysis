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

int main()//?????
{
    int a,n;//???a,n
	cin>>a;//?????a
	n=a/100;//???????
	cout<<n<<endl;
	a=a-n*100;
	n=a/50;
	cout<<n<<endl;
	a=a-n*50;
	n=a/20;
	cout<<n<<endl;
	a=a-n*20;
	n=a/10;
	cout<<n<<endl;
	a=a-n*10;
	n=a/5;
	cout<<n<<endl;
	a=a-n*5;
	cout<<a;
	return 0;//?????
}