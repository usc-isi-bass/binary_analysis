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
int n,a,b,c,d;
a=b=c=d=0;
cin>>n;
while(n>999){
	n=n-1000;
	a=a+1;}
while(n>99){
	n=n-100;
	b++;}
while(n>9){
	n=n-10;
	c++;}
if(n>0){
while(n>0){
	n=n-1;
	d++;}}
else if(n=0)
	d=0;
if(a==0){
	if(b==0){
		if(c==0){
			if(d==0){
				cout<<d;}
			else 
				cout<<d;}
		else
			cout<<d<<c;}
	else
		cout<<d<<c<<b;}
else cout<<d<<c<<b<<a;
	return 0;
}