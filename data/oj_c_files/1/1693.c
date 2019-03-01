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
	int func(int a,int b);
	int n;
	cin>>n;
	while(n--){
		int number;
		cin>>number;
		cout<<func(number,number)<<endl;
	}
	return 0;
}

int func(int a,int b)
{
	if(a==1){
		return 1;
	}
	if(b==1){
		return 0;
	}
	if(a%b==0){
		return func(a/b,b)+func(a,b-1);
	}
	return func(a,b-1);
}