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
	char a[100]={'\0'},b[4]={'\0'},*q=NULL,*p=NULL;
	int temp=0;
	while(cin>>a)
	{
	cin>>b;
	temp=0;
	for(p=a;p<a+strlen(a);p++)
	{
		if(*p>temp)temp=*p;
	}
	for(p=a;p<a+strlen(a);p++)
	{
		if(*p==temp)break;
	}
	for(q=a;q<=p;q++)cout<<*q;
	cout<<b;
	for(q=p+1;q<a+strlen(a);q++)cout<<*q;
	cout<<endl;}
	return 0;
}
