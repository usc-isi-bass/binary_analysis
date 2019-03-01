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
	int a,i=0,b[3]={3,5,7};//???????????
	cin>>a;
	if(a%3==0&&a%5==0&&a%7==0)
		cout<<"3"<<" "<<"5"<<" "<<"7";
	else if(a%3==0&&a%7==0&&a%5!=0)
		cout<<"3"<<" "<<"7";
	else if(a%3!=0&&a%5==0&&a%7==0)
		cout<<"5"<<" "<<"7";
	else if(a%3==0&&a%5==0&&a%7!=0)
		cout<<"3"<<" "<<"5";
	else if(a%3==0&&a%5!=0&&a%7!=0)
		cout<<"3";
	else if(a%3!=0&&a%5==0&&a%7!=0)
		cout<<"5";
	else if(a%3!=0&&a%5!=0&&a%7==0)
		cout<<"7";
	else if(a%3!=0&&a%5!=0&&a%7!=0) //?????3,5,7?????
		cout<<"n";
	return 0;//????? 
}