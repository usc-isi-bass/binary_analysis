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

int main(){
	int a,b,i;
	cin>>a;
	
	for(i=1;i<10000;i++)
	{
		if(a==1)
	{cout<<"End"<<endl;
	return 0;}

		
	else if(a%2==0)
	{b=a/2;
	cout<<a<<"/2="<<b<<endl;
	a=b;}
	else
	{b=3*a+1;
	cout<<a<<"*3+1="<<b<<endl;
	a=b;}
}
	return 0;
}