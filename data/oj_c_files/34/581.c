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

void dol(int a);
void sgl(int a)
{
	if(a==1)cout<<"End"<<endl;
	else 
	{
		cout<<a<<"*3+1="<<a*3+1<<endl;
		dol(a*3+1);
	}
}
void dol(int a)
{
	cout<<a<<"/2="<<a/2<<endl;
	if((a/2)%2==0)dol(a/2);
	else sgl(a/2);
}
int main()
{
	int a;
	cin>>a;
	if(a%2==1)sgl(a);
	else dol(a);
	return 0;
}