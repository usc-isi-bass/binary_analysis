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

int jiaogu(int a)
{
	if(a==1){
		return 1;
	}
	if(a%2==1&&a!=1){
		cout<<a<<"*3+1="<<a*3+1<<endl;
		return a*3+1;
	}
	else if(a%2==0){
		cout<<a<<"/2="<<a/2<<endl;
		return a/2;
	}
}
int main()
{
	int a;
	cin>>a;
	while(a){
		a=jiaogu(a);
		if(a==1){
			cout<<"End"<<endl;
			break;
		}
	}
	return 0;
}