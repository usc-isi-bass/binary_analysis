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
	int num,n=0;
	cin>>num;
	if(!(num%3)) {n=1; cout<<3;} 
	if(!(num%5)) 
	  {if(n) cout<<' '; n=1; cout<<5;} 
	if(!(num%7))
	  {if(n) cout<<' '; n=1; cout<<7;} 
	if(!n) cout<<'n';
	cin.get();cin.get();
	return 0;

}