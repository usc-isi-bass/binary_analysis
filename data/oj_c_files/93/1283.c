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

int main ()
{
	int a,i=0,m=0;
	cin>>a;
	if (a%3==0)
	{
		cout<<"3";
	i++;
	m++;}
	if (a%5==0)
	{
		if (i!=0)
	{cout<<" 5";}
	else
	{cout<<"5";}
	i++; 
		m++;}
	if (a%7==0)
	{
		if (i!=0)
	{cout<<" 7";}
	else
	{cout<<"7";}
	m++;}
	if (m==0)
		cout<<"n";
	return 0;
}