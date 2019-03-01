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
	int Number;
	cin>>Number;
	if(Number%3==0&&Number%5==0&&Number%7==0)
	cout<<3<<" "<<5<<" "<<7<<endl;
	if(Number%3==0&&Number%5==0&&Number%7!=0)
	cout<<3<<" "<<5<<endl;
	if(Number%3==0&&Number%5!=0&&Number%7==0)
	cout<<3<<" "<<7<<endl;
	if(Number%3!=0&&Number%5==0&&Number%7==0)
	cout<<5<<" "<<7<<endl;
    if(Number%3!=0&&Number%5!=0&&Number%7==0)
    cout<<7<<endl;
     if(Number%3!=0&&Number%5==0&&Number%7!=0)
    cout<<5<<endl;
     if(Number%3==0&&Number%5!=0&&Number%7!=0)
    cout<<3<<endl;
    if(Number%3!=0&&Number%5!=0&&Number%7!=0)
    cout<<"n"<<endl;
	cin.get();	cin.get();	cin.get();	cin.get();
	return 0;
}