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
	int num;
	cin>>num;                                                   //???????????num?????
	
	if (num%3==0)                                             //????num?3,5,7??????????????????????????????????????????
	{	cout<<'3';                                  
	   if (num%5==0) cout<<" 5";
	   if (num%7==0) cout<<" 7"; }
	else if (num%5==0)
	{
		cout<<'5';
		 if (num%7==0) cout<<" 7"; 
	}
	else if (num%7==0) cout<<"7";
	
	if (num%3!=0 && num%5!=0 && num%7!=0) cout<<'n';            //???????????????n
	
	return 0;
	
}